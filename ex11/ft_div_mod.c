void	ft_div_mod(int a, int b, int *div, int *mod)
{
  if (b == 0)
    {
      *div = 0;
      *mod = 0;
    }
  else
    {
      *div = a / b;
      *mod = a % 0;
    }
}
