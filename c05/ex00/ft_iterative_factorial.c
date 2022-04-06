/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:35:43 by diserran          #+#    #+#             */
/*   Updated: 2022/03/09 18:41:21 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;

	n = -12;
	printf("El factorial de %d es %d", n, ft_iterative_factorial(n));
} */

int	ft_iterative_factorial(int nb)
{
	int	zbk;
	int	i;

	i = 1;
	zbk = nb;
	if (zbk > 0)
	{
		while (i < zbk)
		{
			nb *= i;
			i++;
		}
	}
	else if (nb < 0)
		return (0);
	return (nb);
}
