/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:11:10 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/10 18:19:10 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (str[index] >= 97 && str[index] <= 122)
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
