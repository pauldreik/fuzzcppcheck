typedef int (*fp)();
void g( fp f )
{
  fp f2 = static_cast<fp>(f);
}