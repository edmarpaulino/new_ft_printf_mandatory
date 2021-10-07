/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:42:20 by edpaulin          #+#    #+#             */
/*   Updated: 2021/10/07 18:42:21 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	ret = printf("%d\n", 42);
	printf("ret %d\n", ret);
	ret = ft_printf("%d\n", 42);
	ft_printf("ret %d\n", ret);
	return (0);
}
