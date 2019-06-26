#include <unistd.h>

void skyscrapper(char *parm, int dist, int s);

void parsing(char *str, int dist)
{
  char parm[dist * dist];
  int i;
  int d;

  i = 0;
  d = 0;
  while (str[i])
  {
    parm[d] = str[i];
    if (i <= ((((dist * 4) - 1) * 2) - 1))
      i = i + 2;
    else
    {
      i = (((dist * 4) - 1) * 2);
      break ;
    }
    d++;
  }
  skyscrapper(parm, dist, 1);
}

int main(int argc, char **argv)
{
  int len;
  int i;
  char *str;
  int dist;

  i = 0;
  len = 0;
  str = argv[1];
  if (argc != 2)
  while (str[i] != '\0')
  {
    i++;
    len++;
  }
  i = 0;
  if (!(len == 17))
    if (!(len >= 31 && len <= 71 && (len % 8) == 7))
    {
      return (0);
    }
  while (str[i])
  {
    if ((str[i] >= 48 && str[i] <= 57 && str[i + 1] == 32))
      if((str[i] == 32 && str[i + 1] <= 57 && str[i + 1] >= 48))
      {
        return (0);
      }
    i++;
  }
  dist = ((len / 2) + 1) / 4;
  parsing(argv[1], dist);
}
