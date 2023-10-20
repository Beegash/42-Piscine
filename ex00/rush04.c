/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samyilma <samyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:58:13 by samyilma          #+#    #+#             */
/*   Updated: 2023/09/03 12:58:14 by samyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int r, int c, int row, int colm)
{
	char	endl;

	endl = ' ';
	if ((colm == 1 && row == 1) || (colm == c && row == r && endl == '.'))
	{
		ft_putchar('A');
		endl = '.';
	}
	else if ((row == r && colm == 1) || (row == 1 && colm == c && endl == ' '))
	{
		ft_putchar('C');
		endl = ' ';
	}
	else if ((row == 1 && colm != c && colm != 1))
		ft_putchar('B');
	else if ((row != 1 && row != r) && (colm == 1 || colm == c))
		ft_putchar('B');
	else if ((row == r && colm != 1 && colm != c))
		ft_putchar('B');
	else if ((row != 1 || row != r) && (colm != 1 && colm != c))
		ft_putchar(' ');
	else if ((row == r && colm == c))
		ft_putchar('A');
}

void	rush(int r, int c)
{
	int	row;
	int	colm;

	if (r <= 0 || c <= 0)
		write(1, "Error!", 6);
	colm = 1;
	while (colm <= c)
	{
		row = 1;
		while (row <= r)
		{
			check(r, c, row, colm);
			row++;
		}
		ft_putchar('\n');
		colm++;
	}
}
