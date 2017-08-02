#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
  while ((*s1 == *s2) && (*s1) && (*s2))
    {
      ++s1;
      ++s2;
    }
  return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i]);
      str++;
    }
}

void	sort_params(char **av, int ac)
{
  int	i;
  char	*tmp;
  int	sort;

  i = 1;
  sort = 1;
  while (i < ac - 1)
    {
      if (ft_strcmp(av[i], av[i + 1]) > 0)
	{
	  tmp = av[i + 1];
	  av[i + 1] = av[i];
	  av[i] = tmp;
	  sort = 0;
	}
      ++i;
    }
  if (sort == 0)
    sort_params(av, ac);
}

int     main(int ac, char **av)
{
  int	i;

  i = 1;
  sort_params(av, ac);
  while (i < ac)
    {
      ft_putstr(av[i]);
      ft_putstr("\n");
      ++i;
    }
  return (0);
}
