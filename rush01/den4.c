/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   den4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:04:40 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/10 11:39:37 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	initialize_matrix(int tag_array[4][4], int box_array[4][4])
{
	int	i;
	int	j;
	int	a;
	int	d;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tag_array[i][j] == 4)
			{
				if (i == 0 || i == 1)
				{
					a = 0;
					while (a < 4)
					{
						if (i == 1)
							box_array[3 - a][j] = a + 1;
						else
							box_array[a][j] = a + 1;
						a++;
					}
				}
				else if (i == 2 || i == 3)
				{
					d = 0;
					while (d < 4)
					{
						if (i == 2)
							box_array[j][d] = d + 1;
						else
							box_array[j][d] = 4 - d;
						d++;
					}
				}
			}
			else if (tag_array[i][j] == 1)
			{
				if (i == 2)
					box_array[j][0] = 4;
				if (i == 3)
					box_array[j][3] = 4;
				if (i == 0)
					box_array[0][j] = 4;
				if (i == 1)
					box_array[3][j] = 4;
			}
			j++;
		}
		i++;
	}
}

void	ft_printer(int box_array[4][4])
{
	int	k;
	int	l;

	k = 0;
	while (k < 4)
	{
		l = 0;
		while (l < 4)
		{
			printf(" %d ", box_array[k][l]);
			l++;
		}
		k++;
		printf("\n");
	}
}

int	is_valid(int matrix[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[row][i] == num || matrix[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	skyscraper_solve(int matrix[4][4])
{
	int	row;
	int	col;
	int	num;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (matrix[row][col] == 0)
			{
				num = 1;
				while (num <= 4)
				{
					if (is_valid(matrix, row, col, num))
					{
						matrix[row][col] = num;
						if (skyscraper_solve(matrix))
						{
							return (1);
						}
						matrix[row][col] = 0;
					}
					num++;
				}
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}

void	string_to_integer(int tag_array[4][4], char *cha)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (*cha != '\0')
	{
		while (l < 4)
		{
			if (*cha != ' ')
			{
				tag_array[k][l] = *cha - '0';
				l++;
			}
			cha++;
		}
		k++;
		l = 0;
	}
}

int	main(void)
{
	int	box_array[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int	tag_array[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	char	str[] = "1 2 2 3 2 1 3 2 1 3 3 2 4 2 1 2";
	string_to_integer(tag_array, str);
	ft_printer(tag_array);
	printf("tag-Array\n\n");
	initialize_matrix(tag_array, box_array);
	ft_printer(box_array);
	printf(" initialize_matrix \n \n ");
	if (skyscraper_solve(box_array))
	{
		printf("4x4 skyscraper table :\n");
		ft_printer(box_array);
	}
	else
	{
		printf("jj\n");
	}
	return (0);
}
