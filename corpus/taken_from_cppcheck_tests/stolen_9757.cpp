void foo(ABC *p)
{
    int var1 = p ? (1 + p->a) : 0;
    if (!p)
        ;
}