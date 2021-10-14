/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahan <hahan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:35:01 by hahan             #+#    #+#             */
/*   Updated: 2021/10/14 09:46:30 by hahan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while (a[0] <= '6')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 5);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
	write(1, "789", 3);
}
