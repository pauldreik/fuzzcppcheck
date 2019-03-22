void foo(struct ABC *abc)
{
    abc = abc->next;
    if (!abc)
        ;
}