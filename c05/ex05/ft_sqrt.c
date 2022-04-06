/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:40:15 by diserran          #+#    #+#             */
/*   Updated: 2022/03/09 18:46:21 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Raiz cuadrada: %f\n", sqrt(4));
	printf("Fake: %d", ft_sqrt(4));
} */

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	while (c * c <= nb)
	{
		if (nb > 2147483641)
			return (0);
		if (nb == c * c)
			return (c);
		c++;
	}
	return (0);
}
