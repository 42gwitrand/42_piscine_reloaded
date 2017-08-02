#include <stdlib.h>

int	ft_strlen(char *str)
{
  int	i;

  while (str[i])
    ++i;
  return (i);
}

char	*ft_strdump(char *src)
{
  int	i;
  char	*new;

  i = 0;
  if (str == NULL)
    return (NULL);
  if ((new = malloc(sizeof(char) * (ft_strlen(src) + 1))) == NULL)
    return (NULL);
  while (src[i])
    {
      new[i] = str[i];
      ++;
    }
  new[i] = '\0';
  return (new);
}
