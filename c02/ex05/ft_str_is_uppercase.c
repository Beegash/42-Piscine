/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:45:41 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/11 13:57:50 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[index] >= 65 && str[index] <= 90)
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
