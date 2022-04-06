/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:16:39 by diserran          #+#    #+#             */
/*   Updated: 2022/02/21 13:09:30 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	zbk[3];

	zbk [0] = '0';
	while (zbk [0] <= '9')
	{
		zbk [1] = '0';
		while (zbk [1] <= '9')
		{
			zbk [2] = '0';
			while (zbk [2] <= '9')
			{
				if (zbk [2] > zbk [1] && zbk [1] > zbk [0])
				{
					write(1, &zbk, 3);
					if (zbk [0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				zbk [2]++;
			}
			zbk [1]++;
		}
		zbk [0]++;
	}
}
