/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_col_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:27:06 by diserran          #+#    #+#             */
/*   Updated: 2022/02/27 14:46:46 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_save_col_up(char *str)
{
	static char	col_up[4];
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (i == 0)
			{
				col_up[j] = str[i];
				j++;
			}
			else if (i != 0 && i <= 6)
			{
				col_up[j] = str[i];
				j++;
			}
		}
		i++;
	}
	return (col_up);
}

char	*ft_save_col_down(char *str)
{
	static char	col_down[4];
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (i >= 8 && i <= 14)
			{
				if (j == 4)
					j = 0;
				col_down[j] = str[i];
				j++;
			}
		}
		i++;
	}
	return (col_down);
}

char	*ft_save_row_left(char *str)
{
	static char	row_left[4];
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (i >= 16 && i <= 22)
			{
				if (j == 4)
					j = 0;
				row_left[j] = str[i];
				j++;
			}
		}
	i++;
	}
	return (row_left);
}

char	*ft_save_row_right(char *str)
{
	static char	row_right[4];
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (i >= 24 && i <= 30)
			{
				if (j == 4)
					j = 0;
				row_right[j] = str[i];
				j++;
			}
		}
	i++;
	}
	return (row_right);
}
