void    ft_putchar(char c);

void	print_para(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i]);
      ++i;
    }
  ft_putchar('\n');
}

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  while (av[i])
    {
      print_para(av[i]);
      ++i;
    }
  return (0);
}
