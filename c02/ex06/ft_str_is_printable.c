/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:51:19 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/07 19:52:24 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (str[index] >= 32 && str[index] <= 126)
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
