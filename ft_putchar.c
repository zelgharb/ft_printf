/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelgharb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:02:34 by zelgharb          #+#    #+#             */
/*   Updated: 2024/11/21 21:15:07 by zelgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
/*int main()
{
	int count = 0;
	char c = 'r';
	ft_putchar(c, &count);
	ft_printf("\n%d", count);
	printf("\n%d", count);
}*/
