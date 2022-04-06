/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:32:11 by diserran          #+#    #+#             */
/*   Updated: 2022/03/03 13:11:02 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	//char	txt[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char txt[] = "G,S%-}Dm-Vxwb-8-I=S%HSvD0)IJaJT,Pc";
	//char txt[] = "RZy0";
	//char txt[] = "={O9FWt/`+";
	//char txt[] = "Y+)ODj-@5";
	//char txt[] = "1*H*";
	//char txt[] = "Oq_TJvM~)9/Fbx]";
	//char txt[] = "!L|";
	//char txt[] = "ITb>(%GE[";
	//char txt[] = "XX]*ABkZ-4E)C~Uk@~7 >.DCwI-A^ %VQ^M1qJKx9";
	//char txt[] = "";
	//char txt[] = " ";
	//char txt[] = "ReKt17+LOl MdR Mdr 4242l42";

	printf("Resultado: %s", ft_strcapitalize(txt));
} */

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
		if (str[i] >= 32 && str[i] <= 126)
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (!(str[i] >= 'a' && str[i] <= 'z'))
					if (!(str[i] >= '0' && str[i] <= '9'))
						if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
							str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
