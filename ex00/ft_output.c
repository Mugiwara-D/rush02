/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:13:34 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/28 14:34:00 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_output(char *arg, char *tab)
{
	unsigned int i;
	
	i = 0 ;

	while (tab[i])
	{
		if ((arg[i] == tab[i]) && (tab[i] >= '0' && tab[i] <= '9'))
		{
			while (tab[i] != '\n')
			{
				ft_putchar(tab[i]);
				i++;
			}
		}
		i++;			

	}
}
