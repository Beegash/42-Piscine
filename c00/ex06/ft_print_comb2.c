/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:48:47 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/04 18:35:14 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			putchar(num1 / 10 + 48);
			putchar(num1 % 10 + 48);
			write (1, " ", 1);
			putchar(num2 / 10 + 48);
			putchar(num2 % 10 + 48);
			if (num1 != 98)
			{
				write (1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
