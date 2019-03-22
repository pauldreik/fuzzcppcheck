void f1(char *s,int size)
{
  if( size > 10 ) strcpy(s,"abc");
}
void f2()
{
  char s[3];
  f1(s,3);
}
