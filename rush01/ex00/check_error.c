/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:49:05 by diserran          #+#    #+#             */
/*   Updated: 2022/02/27 14:57:45 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	ft_error_col(char	*col_up, char	*col_down)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (col_up[i] == '4' && col_down[i] != '1')
		{
			ft_putstr("Error\n");
			return (0);
		}
		else if (col_up[i] == '3' && (col_down[i] == '3' || col_down[i] == '4'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_error_row(char	*row_left, char	*row_right)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (row_left[i] == '4' && row_right[i] != '1')
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (row_left[i] == '3' && (row_right[i] == '3' || row_right[i] == '4'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
