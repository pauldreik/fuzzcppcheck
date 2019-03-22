void foo(x *p)
{
    p = p->next;
    if (!p)
        ;
}