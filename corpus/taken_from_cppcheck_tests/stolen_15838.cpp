static int i = 1;
void f()
{
    int i = 2;
    for (int i = 0; i < 10; ++i)
    {
      i = 3;
    }
    i = 4;
}
