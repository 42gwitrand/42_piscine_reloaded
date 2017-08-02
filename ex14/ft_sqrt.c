int	ft_sqrt(int nb)
{
  int	n;

  n = 1;
  while ((n * n) <= nb)
    {
      if ((n * n) == nb)
	return (n);
      ++n;
    }
  return (0);
}
