void foo(x *p)
{
    p = *p2 = p->next;
    if (!p)
        ;
}