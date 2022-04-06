/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:32:11 by diserran          #+#    #+#             */
/*   Updated: 2022/03/02 15:55:48 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		if (str[i] == ' ')
			if (!(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
