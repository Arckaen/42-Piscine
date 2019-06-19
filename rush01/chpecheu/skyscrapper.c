#include <unistd.h>

void test(int tab[9][9], int dist);
int checker(int tab[9][9], int dist, char *parm);

void skyscrapper(char *parm, int dist, int s)
{
  int tab[9][9];
  int x;
  int y;
  int t;
  int n;

  x = 0;
  t = 0;
  n = dist * s;
  test(tab, dist);
  while (x <= dist && t <= dist)
  {
    y = 0;
    while (y <= dist && t <= dist)
    {
      if (tab[x][y] < 1 || tab[x][y] > 9)
      {
        tab[x][y] = n % (n + 1);
        if (checker(tab, dist, parm) != 1)
        {
          n = n + dist;
          t++;
        }
        else
        y = y + 1;
      }
      else
      y++;
    }
    x++;
  }
  if (t > dist)
  {
    s++;
    skyscrapper(parm, dist, s);
  }
  else
  {
    x = 0;
    while (x <= dist)
    {
      y = 0;
      while (y <= dist)
      {
        write(1, &tab[0][1], 1);
        write(1, &tab[x][y], 1);
        y++;
      }
      write(1, "\n", 1);
      x++;
    }
  }
}
