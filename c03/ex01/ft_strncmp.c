/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:44:38 by diserran          #+#    #+#             */
/*   Updated: 2022/03/03 10:04:02 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	string1[] = "Holisss";
	char	string2[] = "Holi";

	printf("Resultado función original...%d\n", strncmp(string1, string2, 3));
	printf("Y la version hacendado da...%d", ft_strncmp(string1, string2, 3));
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		if (s1[i] != '\0' || s2[i] != '\0')
			if (!(s1[i] == s2[i]))
				return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
