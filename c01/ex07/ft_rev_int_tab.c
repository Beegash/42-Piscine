/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:34:40 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/07 13:56:58 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;
	int	a;

	a = size;
	index = 0;
	while (index < a / 2)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[index];
		tab[index] = temp;
		size--;
		index++;
	}
}
