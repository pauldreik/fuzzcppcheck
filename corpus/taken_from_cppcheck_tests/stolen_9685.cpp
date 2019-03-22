static void foo()
{
    struct ABC *abc = malloc(sizeof(struct ABC));
    if (x)    {
        abc->a = malloc(10);
    }
    else
    {
        free(abc);
        return;
    }
    free(abc->a);
    free(abc);
}