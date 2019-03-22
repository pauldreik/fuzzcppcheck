struct Test
{
  int* data;
};

void foo(Test* x)
{
  Test& y = *x;
  y.data = malloc(10);
}