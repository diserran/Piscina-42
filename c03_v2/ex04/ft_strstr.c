/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:23:40 by diserran          #+#    #+#             */
/*   Updated: 2022/03/05 12:17:50 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Que tal andamios?";
	char	find[] = "o";

	//printf("Resultado bueno... %s\n", strstr(str, find));
	printf("Version del hacendado... %s\n", ft_strstr(str, find));
} */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	coincides;

	i = 0;
	j = 0;
	coincides = 0;
	while ((i < ft_strlen(str) || j < ft_strlen(to_find)) && str[i])
	{
		if (str[i] == to_find[0])
		{
			coincides = i;
			while (to_find[j] == str[i] && to_find[j])
			{
				j++;
				i++;
			}
			if (to_find[j] == '\0')
				return (&str[coincides]);
			else if (to_find[j] != str[i])
				return ("(null)");
		}
		i++;
	}
	return (str);
}
