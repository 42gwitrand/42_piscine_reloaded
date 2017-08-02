void    ft_putchar(char c);

void	ft_print_numbers()
{
  int	i;

  i = '0';
  while (i <= '9')
    {
      ft_putchar(i);
      ++i;
    }
}
