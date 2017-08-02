int		ft_iterative_factorial(int nb)
{
  int n;

  n = 1;
  if (nb < 0 || nb > 12)
    return (0);
  if (nb == 0 || nb == 1)
    return (1);
  if (nb > 1 && nb < 13)
    {
      ++nb;
      while (--nb > 1)
	n = n * nb;
    }
  else
    n = 0;
  return (n);
}
