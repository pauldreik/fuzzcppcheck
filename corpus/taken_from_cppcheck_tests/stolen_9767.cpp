void foo(x *p)
{
    p = bar(p->next);
    if (!p)
        ;
}