void foo(struct ABC *abc)
{
    int a = abc->a;
    abc = abc->next;
    if (!abc)
        ;
}