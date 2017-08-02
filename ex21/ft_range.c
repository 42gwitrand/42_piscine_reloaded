#include <stdlib.h>

int	*ft_range(int min, int max)
{
  int	*table;
  int	i;

  i = 0;
  if (min >= max)
    return (NULL);
  if ((table = malloc(sizeof(int) * (max - min))) == NULL)
    return (NULL);
  while (i < max - min)
    {
      table[i] = min;
      ++i;
      ++min;
    }
  return (table);
}
