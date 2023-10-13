/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:12 by iozmen            #+#    #+#             */
/*   Updated: 2023/08/31 18:47:32 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char ch)
{
	write(1, &ch, 1);
}

void	print_number(char a, char b, char c)
{
	print_char(a + 48);
	print_char(b + 48);
	print_char(c + 48);
	if (a != 7 || b != 8 || c != 9)
	{
		print_char(',');
		print_char(' ');
	}
}

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = 0;
	while (digit1 <= 7)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 8)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 9)
			{
				print_number(digit1, digit2, digit3);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
