void foo(struct ABC *abc)
{
    int a = abc->a;    do
    {
        if (abc)
            abc = abc->next;
        --a;
    }
    while (a > 0);
}