void foo(A*a)
{
  switch (a->b()) {
    case 1:
      while( a ){
        a = a->next;
      }
    break;
    case 2:
      a->b();
      break;
  }
}