#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "inc.h"

void	ft_putstrerror(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      write(2, &str[i], 1);
      i++;
    }
}

int	checkup(char **argv, int i)
{
  char	cara[LENGTH + 1];
  int	fd;

  fd = open(argv[i], O_RDONLY);
  if (fd == -1)
    return (0);
  else
    {
      fd = open(argv[i], O_RDONLY);
      if (fd == -1)
	return (0);
      else
	{
	  cara[read(fd, cara, LENGTH)] = '\0';
	  ft_putstr(cara);
	  if (close(fd) == -1)
	    return (0);
	}
    }
  close(fd);
  return (0);
}

int	main(int argc, char **argv)
{
  int   i;
  char	buff[LENGTH + 1];

  if (argc == 1)
    {
      while (read(0, buff, LENGTH))
	ft_putstr(buff);
      return (0);
    }
  i = 1;
  while (i < argc)
    {
      checkup(argv, i);
      ++i;
    }
  return (0);
}
