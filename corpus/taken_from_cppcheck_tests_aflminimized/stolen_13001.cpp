int    create(COther& ot, const char *c1, ...);
CBase* create(const char *c1, ...);
int foo(COther & ot)
{
   CBase* cp1 = create("AAAA", 44, (char*)0);
   CBase* cp2 = create(ot, "AAAA", 44, (char*)0);
}