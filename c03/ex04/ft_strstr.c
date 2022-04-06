/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:23:40 by diserran          #+#    #+#             */
/*   Updated: 2022/03/03 09:40:41 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Que tal andamios?";
	char	find[] = "";

	//printf("Resultado bueno... %s", strstr(str, find));
	printf("\nVersion del hacendado... %s", ft_strstr(str, find));
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			return (&str[i]);
		}
		i++;
	}
	return (str);
}
