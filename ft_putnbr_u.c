/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelgharb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:06:37 by zelgharb          #+#    #+#             */
/*   Updated: 2024/11/21 21:16:51 by zelgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putnbr_u(n / 10, len);
		ft_putnbr_u(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}
/*int main()
{
	int len = 0;
	int a = -2147483648;
	ft_putnbr_u(a, &len);
	ft_printf("\n%d",len);
	printf("\n%d",len);
}*/
