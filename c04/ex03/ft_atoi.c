/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:26:28 by diserran          #+#    #+#             */
/*   Updated: 2022/03/07 16:58:29 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(str));
} */

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	zbk;

	sign = 1;
	i = 0;
	zbk = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		zbk = (zbk * 10) + (str[i] - '0');
		i++;
	}
	zbk *= sign;
	return (zbk);
}
