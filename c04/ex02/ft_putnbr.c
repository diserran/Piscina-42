/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:44:36 by diserran          #+#    #+#             */
/*   Updated: 2022/03/07 19:45:00 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	long txt = -42;

	ft_putnbr(txt);
}
 */
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
