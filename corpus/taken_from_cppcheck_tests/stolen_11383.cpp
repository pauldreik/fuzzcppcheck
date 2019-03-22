void f()
{
  int b;
  while (b = sizeof (struct foo { int i0;}))
    ;
  if (!(0 <= b ))
    ;
}