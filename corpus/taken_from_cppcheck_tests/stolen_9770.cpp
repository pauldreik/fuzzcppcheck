void foo(struct ABC *abc)
{
    abc = abc ? abc->next : 0;
    if (!abc)
        ;
}