/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:45:14 by almirand          #+#    #+#             */
/*   Updated: 2022/02/20 18:20:18 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	print_fila(char inicio, char fin, int num_col, int caso)
{
	int	cont;

	cont = 2;
	ft_putchar(inicio);
	if (caso == 1)
	{
		while (cont < num_col)
		{
			ft_putchar('*');
			cont++;
		}
	}
	else
	{
		while (cont < num_col)
		{
			ft_putchar(' ');
			cont++;
		}
	}
	ft_putchar(fin);
	write(1, "\n", 1);
}

void	print_columna(int num_fila)
{
	int	cont;

	cont = 2;
	if (num_fila == 1)
	{
		ft_putchar(47);
	}
	else
	{
		ft_putchar(47);
		write(1, "\n", 1);
		while (cont < num_fila)
		{
			ft_putchar('*');
			write(1, "\n", 1);
			cont++;
		}
		ft_putchar(92);
	}
	write(1, "\n", 1);
}

void	begin_rush(int x, int y)
{
	int	cont_fila;

	cont_fila = 1;
	while (cont_fila <= y)
	{
		if (cont_fila == 1)
		{
			print_fila(47, 92, x, 1);
			cont_fila++;
		}
		else if (cont_fila == y)
		{
			print_fila(92, 47, x, 1);
			cont_fila++;
		}
		else
		{
			print_fila('*', '*', x, 2);
			cont_fila++;
		}
	}
}

void	rush(int x, int y)
{
	if (x == 1)
	{
		print_columna(y);
	}
	else if (y == 1)
	{
		print_fila('o', 'o', x, 1);
	}
	else if (x > 1 && y > 1)
	{
		begin_rush(x, y);
	}
}
