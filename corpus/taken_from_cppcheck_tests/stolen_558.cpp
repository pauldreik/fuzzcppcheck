void f()
{
  char *p(new char[10]);
  p[0] = 0;
  p[9] = 9;
  delete [] p;
}