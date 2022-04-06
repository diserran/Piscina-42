/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:26:34 by diserran          #+#    #+#             */
/*   Updated: 2022/03/10 19:16:10 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d", ft_find_next_prime(0));
} */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
		return (nb);
	else
	{
		while (is_prime == 0)
		{
			nb++;
			is_prime = ft_is_prime(nb);
			if (is_prime == 1)
				return (nb);
		}
	}
	return (0);
}
