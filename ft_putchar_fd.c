#include "libft.h"

// like putchar()
// write char on defined file descriptor

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}