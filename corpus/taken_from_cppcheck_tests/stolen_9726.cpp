void foo(struct ABC *abc)
{
    int a = abc->a;
    f(&abc);
    if (!abc)
        ;
}