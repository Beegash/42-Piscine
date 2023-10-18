/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:06:49 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/18 20:05:51 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_compare(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_change(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_print(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != (void *)0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_compare(argv[j], argv[j + 1]) > 0)
			{
				ft_change(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	ft_print(argv);
}
