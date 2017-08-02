#include <unistd.h>
#include "inc.h"

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putstr(char *str)
{
  int	len;

  len = 0;
  while (str[len])
    {
      ft_putchar(str[len]);
      ++len;
    }
}
