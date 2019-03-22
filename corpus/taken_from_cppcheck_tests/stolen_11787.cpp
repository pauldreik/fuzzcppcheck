typedef int (*fp)();
void g( fp f )
{
  fp f2 = (fp)f;
}