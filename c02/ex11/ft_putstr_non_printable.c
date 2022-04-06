/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:40:08 by diserran          #+#    #+#             */
/*   Updated: 2022/02/28 13:26:02 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	int		x;
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexa[c / 16]);
		x = c % 16;
		ft_putchar(hexa[x]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
