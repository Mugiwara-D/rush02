/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:28:34 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/28 14:34:02 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_output(char *arg, char *tab);

int	main(int argc, char **argv)
{
	(void)	argc;

	int fd;
	int rr;
	char tab[692];


	fd = open("numbers.dict", O_RDONLY);
	rr = read(fd, tab, 692);
	//buf[rr] = '\n';
	//ft_putstr(buf);
	ft_output(argv[1],tab);
	ft_putnbr(fd);
	ft_putstr("\n");
	rr = close(fd);
	return 0;	
}
