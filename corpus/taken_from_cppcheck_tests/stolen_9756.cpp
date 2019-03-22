void foo(ABC *p)
{
    int var1 = p ? (p->a) : 0;
    if (!p)
        ;
}