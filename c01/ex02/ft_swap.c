/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:27:09 by iozmen            #+#    #+#             */
/*   Updated: 2023/09/10 14:40:23 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main (void)
{
	int num1;
	int num2;
	int *n1;
	int *n2;
	
	num1 = 5;
	num2 = 7;
	n1 = &num1;
	n2 = &num2;
	ft_swap(n1,n2);
	printf("%d", num1);
}