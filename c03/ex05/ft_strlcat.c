/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:38:04 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/13 18:28:00 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sdest;
	unsigned int	ssrc;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	sdest = i;
	ssrc = 0;
	while (src[ssrc] != '\0')
	{
		ssrc++;
	}
	j = 0;
	while (j < ssrc)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ssrc + sdest);


}