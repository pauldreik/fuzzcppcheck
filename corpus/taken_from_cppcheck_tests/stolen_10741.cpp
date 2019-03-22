void f() {
  unsigned char c; c = getchar();
  while( EOF != c )
  {
    bar(c);
    c = getchar();
  } ;
}