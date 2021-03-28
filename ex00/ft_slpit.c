/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slpit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:34:13 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/28 16:15:37 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	inserword(char *tab,char **tab2)
{
	unsigned int i;
	int x;
	int y;
	
	y = 0;
	i = 0;
	x = 0;
	while (tab[i])
	{
		if (tab[i] == ' ')
			i++;
		else if (tab[i] <= '9' && tab[i] >= '0')
		{
			while (tab[i] <= '9' && tab[i] >= '0')
			{
				*tab2[x] = tab[i];
				i++;
			}
			x++;
		}
		
		if ((tab[i] <= 'z' && tab[i] >= 'a') || (tab[i] <= 'Z' && tab[i] >= 'A'))
		{
			while ((tab[i] <= 'z' && tab[i] >= 'a') || (tab[i] <= 'Z' && tab[i] >= 'A'))
				{
					tab2[x][y] = tab[i];
					i++;
					y++;
				}
		}
		i++;

	}
}
#include <stdio.h>
int main()
{
	char tab[10] = "0: zero";
	char **tab2 ;
	inserword(tab,tab2);
	printf("%s\n",tab2[0]);
}
