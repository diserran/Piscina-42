/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:20:14 by diserran          #+#    #+#             */
/*   Updated: 2022/02/21 14:07:35 by diserran         ###   ########.fr       */
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

void	ft_print_combn(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= n * 10)
		{
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

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
