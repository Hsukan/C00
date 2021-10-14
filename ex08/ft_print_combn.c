/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahan <hahan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:47:34 by hahan             #+#    #+#             */
/*   Updated: 2021/10/14 14:49:45 by hahan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_head;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arr(int arr[], int n)
{
	int	i;

	i = 0;
	if (g_head == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	g_head = 0;
}

void	rf(int idx, int val, int arr[], int n)
{
	if (idx == n)
	{
		print_arr(arr, n);
		return ;
	}
	while (val <= 9)
	{
		arr[idx] = val++;
		rf(idx + 1, val, arr, n);
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	g_head = 1;
	if (n <= 0 || n >= 10)
		return ;
	rf(0, 0, arr, n);
}
