void foo(struct ABC *abc)
{
    int a;
    if (!abc)
        goto out;    a = abc->a;
    return;
out:
    if (!abc)
        ;
}