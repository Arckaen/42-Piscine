int descente(int i, int dist, int tab[9][9], char parm)
{
  int f;
  int x;
  int v;

  v = 1;
  f = dist;
  x = tab[i][dist -f];
  while (--f >= 0)
  {
    if (x < tab[i][dist -f])
    {
      v++;
      x = tab[i][dist - f];
    }
  }
  if (v != parm)
    return (0);
  else
    return (1);
}
int monter(int i, int dist, int tab[9][9], char parm)
{
  int f;
  int x;
  int v;

  v = 1;
  f = 0;
  x = tab[i % dist][dist - f];
  while (++f <= dist)
  {
    if (x < tab[i % dist][dist - f])
    {
      v++;
      x = tab[i % dist][dist - f];
    }
  }
  if (v != parm)
    return (0);
  else
    return (1);
}
int gauche(int i, int dist, int tab[9][9], char parm)
{
  int f;
  int x;
  int v;

  v = 1;
  f = 0;
  x = tab[dist - f][i % dist];
  while (++f <= dist)
  {
    if (x < tab[dist - f][i % dist])
    {
      v++;
      x = tab[dist - f][i % dist];
    }
  }
  if (v != parm)
    return (0);
  else
    return (1);
}
int droite(int i, int dist, int tab[9][9], char parm)
{
  int f;
  int x;
  int v;

  v = 1;
  f = dist;
  x = tab[dist - f][i % dist];
  while (--f >= 0)
  {
    if (x < tab[dist - f][i % dist])
    {
      v++;
      x = tab[dist - f][i % dist];
    }
  }
  if (v != parm)
    return (0);
  else
    return (1);
}

int checker(int tab[9][9], int dist, char *parm)
{
    int i;

    i = 0;
    while (i < (dist * dist))
    {
      if ((i / dist) == 0)
      {
        if (descente(i, dist, tab, parm[i]) == 1)
          return (1);
      }
      else if ((i / dist) == 3)
      {
        if (gauche(i, dist, tab, parm[i]) == 1)
          return (1);
      }
      else if ((i / dist) == 1)
      {
        if (monter(i, dist, tab, parm[i]) == 1)
          return (1);
      }
      else if ((i / dist) == 2)
      {
        if (droite(i, dist, tab, parm[i]) == 1)
          return (1);
      }
      i++;
    }
    return (0);
}
