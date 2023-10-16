/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:33:45 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/14 12:11:35 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	j = 0;
	while (j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
