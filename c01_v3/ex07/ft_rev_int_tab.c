/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:01:27 by diserran          #+#    #+#             */
/*   Updated: 2022/02/23 18:23:43 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	size--;
	while (count < size)
	{
		temp = tab[count];
		tab[count] = tab[size];
		tab[size] = temp;
		count++;
		size--;
	}
}
