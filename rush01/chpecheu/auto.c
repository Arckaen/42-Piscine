
void test(char *parm, int dist)
{
  int tab[dist][dist];
  int d;
  int b;
  int i;
  int f;

  i = 0;
  while (parm[i])
  {
    if (parm[i] == 1)
    {
      if ((i / dist) == 0)
        tab[i][0] = 4;
      else if ((i / dist) == 3)
        tab[dist][i % dist] = 4;
      else if ((i / dist) == 1)
        tab[i % dist][dist] = 4;
      else if ((i / dist) == 2)
        tab[0][i % dist] = 4;
    }
    if (parm[i] == 4 )
    {
      if ((i / dist) == 0)
      {
        f = dist;
        while (f >= 0)
        {
          tab[i][dist -f] = dist - (f + 1);
          f--;
        }
      }
      else if ((i / dist) == 3)
      {
        f = 0;
        while(f <= dist)
        {
          tab[dist - f][i % dist] = f + 1;
          f++;
        }
      }
      else if ((i / dist) == 1)
      {
        f = 0;
        while (f <= dist)
        {
          tab[i % dist][dist - f] = f + 1;
          f++;
        }
      }
      else if ((i / dist) == 2)
      {
        f = dist;
        while(f >= 0)
        {
          tab[dist - f][i % dist] = dist - (f + 1);
          f--;
        }
      }
    }
    i++;
  }
}
