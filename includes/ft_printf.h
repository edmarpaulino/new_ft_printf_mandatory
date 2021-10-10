/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:41:04 by edpaulin          #+#    #+#             */
/*   Updated: 2021/10/10 16:51:30 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char	*format, ...);
int		ft_vprintf(va_list ap, char *format);
int		ft_type(va_list ap, char type);

int		ft_type_c(int c);
int		ft_type_s(char *s);
int		ft_type_p(unsigned long p);
int		ft_type_d(int d);
int		ft_type_ux(unsigned int x, char	*base);

size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_convert_base(size_t n, char *base);
char	*ft_uitoa(unsigned int un);

#endif
