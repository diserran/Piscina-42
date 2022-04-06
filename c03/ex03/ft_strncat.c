/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:19:41 by diserran          #+#    #+#             */
/*   Updated: 2022/03/03 09:21:12 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

int	main(void)
{
	char	dest[10] = "42";
	char	src[] = "Urduliz";

	//printf("Resultado función original...%s\n", strncat(dest, src, 4));
	printf("Y la version hacendado da...%s", ft_strncat(dest, src, 4));
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((src[i] || dest[i]) && i < nb - 1)
	{
		if (dest[i] == '\0')
		{
			while (j <= nb - 1)
			{
				dest[i] = src[j];
				j++;
				i++;
			}
		}
		if ((j - 1) == nb - 1)
			src[j - 1] = '\0';
		i++;
	}
	return (dest);
}
