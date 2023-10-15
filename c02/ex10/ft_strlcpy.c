/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:38:49 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/11 14:26:56 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	index = 0;
	length = 0;
	while (src[length] != '\0' && length < size -1)
	{
		length++;
	}
	while (index < size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	if (size > 0)
	{
		dest[index] = '\0';
	}
	return (length);
}
