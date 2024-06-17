/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos <pramos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:40:13 by pramos            #+#    #+#             */
/*   Updated: 2023/03/13 17:12:14 by pramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_float(int n, int *len)
{
	*len += print_ft_lenint(n);
	print_ft_putnbr(n);
}

void	ft_hexminmay(unsigned int x, char *base, int *len)
{
	unsigned int	xlen;

	xlen = print_ft_strlen(base);
	if (x >= xlen)
	{
		(*len)++;
		ft_void(x / xlen, base, len);
	}
	write(1, &base[x % xlen], 1);
	(*len)++;
}

void	ft_porcen(int *len)
{
	write(1, "%", 1);
	(*len)++;
}
