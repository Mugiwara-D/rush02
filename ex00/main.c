#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);
int	ft_atoi(char *str);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	(void)	argc;
	(void) 	argv;
	int fd;
	int rr;
	char buf[692];

	fd = open("numbers.dict", O_RDONLY);
	rr = read(fd, buf, 692);
	buf[rr] = '\n';
	ft_putstr(buf);
	ft_putnbr(fd);
	ft_putstr("\n");
	rr = close(fd);
	return 0;	
}
