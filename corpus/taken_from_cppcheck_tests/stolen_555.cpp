void f()
{
  char *p; p = malloc(10);
  p[10] = 7;
  free(p);
}