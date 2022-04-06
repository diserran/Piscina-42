/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:59:48 by diserran          #+#    #+#             */
/*   Updated: 2022/03/09 18:40:55 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("%d", ft_iterative_power(nb, power));
} */

int	ft_iterative_power(int nb, int power)
{
	int	zbk;

	zbk = 1;
	while (power != 0)
	{
		zbk *= nb;
		power--;
	}
	return (zbk);
}
