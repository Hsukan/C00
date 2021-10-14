/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahan <hahan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:47:30 by hahan             #+#    #+#             */
/*   Updated: 2021/10/14 10:18:47 by hahan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_letter(char c)
{
	write(1, &c, 1);
}

void	ft_write(int a, int b)
{
print_letter(a / 10 + '0');
	print_letter(a % 10 + '0');
	print_letter(' ');
	print_letter(b / 10 + '0');
	print_letter(b % 10 + '0');
	if (a + b != 98 + 99)
	{
		print_letter(',');
		print_letter(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}
