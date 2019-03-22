void f()
{
  char *p; p = malloc(10);
  p[0] = 0;
  p[9] = 9;
  free(p);
}