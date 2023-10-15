/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:21:09 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/17 22:47:22 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	ch;
	int		boolean;

	index = 0;
	boolean = 1;
	while (str[index] != '\0')
	{
		ch = str[index];
		if (boolean == 1 && ch >= 97 && ch <= 122)
			str[index] -= 32;
		else if (boolean == 0 && ch >= 65 && ch <= 90)
			str[index] += 32;
		if (ch < 48 || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
			boolean = 1;
		else
			boolean = 0;
		index++;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
 char src[] = "Salute, Comment du dasd die 42es";
  printf("%s",ft_strcapitalize(src));
	}
