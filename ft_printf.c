/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:41:21 by edpaulin          #+#    #+#             */
/*   Updated: 2021/10/10 16:51:18 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list ap, char type)
{
	if (type == 'c')
		return (ft_type_c(va_arg(ap, int)));
	else if (type == 's')
		return (ft_type_s(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_type_p(va_arg(ap, unsigned long)));
	else if (type == 'd' || type == 'i')
		return (ft_type_d(va_arg(ap, int)));
	else if (type == 'u')
		return (ft_type_ux(va_arg(ap, unsigned int), "0123456789"));
	else if (type == 'x')
		return (ft_type_ux(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_type_ux(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (type == '%')
		return (write(1, "%", 1));
	else
		return (0);
}

int	ft_vprintf(va_list ap, char *format)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_type(ap, format[i]);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	return (len);
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	len = ft_vprintf(ap, (char *)format);
	va_end(ap);
	return (len);
}
