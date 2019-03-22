void f(int &x)
{
  int n = 1;
  do
  {
    ++n;
    ++x;
  } while (x);
}