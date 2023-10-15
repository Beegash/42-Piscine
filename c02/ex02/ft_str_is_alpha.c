/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:21:19 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/10 12:03:37 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	boolean;

	boolean = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if ((90 >= str[index]) && (str[index] >= 65))
			boolean = 1;
		else if ((122 >= str[index]) && (str[index] >= 97))
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
