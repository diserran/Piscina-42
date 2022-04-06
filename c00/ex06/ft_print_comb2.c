/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:45:08 by diserran          #+#    #+#             */
/*   Updated: 2022/02/21 13:51:22 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_zenbaki(int zenbaki)
{
	int	batekoa;
	int	hamartar;

	if (zenbaki < 10)
	{
		ft_putchar('0');
		ft_putchar(zenbaki + '0');
	}
	else
	{
		hamartar = zenbaki / 10;
		batekoa = zenbaki % 10;
		ft_putchar(hamartar + '0');
		ft_putchar(batekoa + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_zenbaki(i);
			ft_putchar(' ');
			ft_print_zenbaki(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
