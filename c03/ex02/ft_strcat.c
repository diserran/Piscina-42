/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:56:00 by diserran          #+#    #+#             */
/*   Updated: 2022/03/03 09:13:42 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

int	main(void)
{
	char	dest[10] = "42";
	char	src[] = "Urduliz";

	//printf("Resultado función original...%s\n", strcat(dest, src));
	printf("Y la version hacendado da...%s", ft_strcat(dest, src));
} */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	strlen;

	i = 0;
	j = 0;
	strlen = ft_strlen(src);
	while (src[i] || dest[i])
	{
		if (dest[i] == '\0')
		{
			while (j <= strlen)
			{
				dest[i] = src[j];
				j++;
				i++;
			}
		}
		if ((j - 1) == strlen)
			src[j - 1] = '\0';
		i++;
	}
	return (dest);
}
