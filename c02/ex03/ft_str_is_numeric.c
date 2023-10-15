/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:56:50 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/10 18:19:17 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	boolean;

	boolean = 1;
	index = 0;
	if (str[index] == '\0')
	{
		return (boolean);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 48 && str[index] <= 57)
			boolean = 1;
		else
		{
			boolean = 0;
			break ;
		}
		index++;
	}
	return (boolean);
}
