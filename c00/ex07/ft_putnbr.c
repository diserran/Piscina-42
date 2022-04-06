/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:55:34 by diserran          #+#    #+#             */
/*   Updated: 2022/02/21 13:14:28 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_number(long zbk)
{
	if (zbk < 0)
	{
		ft_putchar('-');
		zbk = -zbk;
		if (zbk > 9)
		{
			ft_putnbr(zbk / 10);
			ft_putchar(zbk % 10 + '0');
		}
		else
		{
			ft_putchar(zbk + '0');
		}
	}
	else if (zbk > 9)
	{
		ft_putnbr(zbk / 10);
		ft_putchar(zbk % 10 + '0');
	}
	else
	{
		ft_putchar(zbk + '0');
	}
}

void	ft_putnbr(int nb)
{
	long	zbk;

	zbk = nb;
	ft_convert_number(zbk);
}
