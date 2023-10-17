/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:52:24 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/16 15:48:44 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(int nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

int	ft_divider(int length)
{
	int	divider;

	divider = 1;
	while (length - 1 > 0)
	{
		divider *= 10;
		length--;
	}
	return (divider);
}

void	ft_putchar(char ch)
{
	ch += 48;
	write(1, &ch, 1);
}

int	ft_negative(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	divider;
	int	length;
	int	num;

	num = ft_negative(nb);
	length = ft_length(num);
	divider = ft_divider(length);
	while (length > 0)
	{
		if ((num - divider) == 0)
		{
			ft_putchar(num / divider);
			num = 0;
		}
		else
		{
			ft_putchar(num / divider);
			num = num - ((num / divider) * divider);
			divider /= 10;
		}
		length--;
	}
}
