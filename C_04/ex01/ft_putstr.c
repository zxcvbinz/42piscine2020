
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	char str[] = "Bella raga, bella giornata qui a Roma";
	ft_putstr(str);
	return (0);
}
