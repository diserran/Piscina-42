/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:53:47 by diserran          #+#    #+#             */
/*   Updated: 2022/02/27 15:03:27 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_table(char *str);
char	*ft_save_col_up(char *str);
char	*ft_save_col_down(char *str);
char	*ft_save_row_left(char *str);
char	*ft_save_row_right(char *str);
int		ft_error_col(char	*col_up, char	*col_down);
int		ft_error_row(char	*row_left, char	*row_right);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_table(argv[1]);
	else
		ft_putstr("Error\n");
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

void	ft_table(char *str)
{
	char	*col_up;
	char	*col_down;
	char	*row_left;
	char	*row_right;

	col_up = ft_save_col_up(str);
	col_down = ft_save_col_down(str);
	row_left = ft_save_row_left(str);
	row_right = ft_save_row_right(str);

	ft_error_col(col_up, col_down);
	ft_error_row(row_left, row_right);
}
