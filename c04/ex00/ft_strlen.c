/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:35:42 by diserran          #+#    #+#             */
/*   Updated: 2022/03/07 16:59:24 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Yepa";

	printf("Tamano del string: %d\n", ft_strlen(str));
} */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i] != '\0')
		count++;
	return (count);
}
