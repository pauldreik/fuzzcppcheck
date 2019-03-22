static struct ABC * foo()
{
    struct ABC *abc = malloc(sizeof(struct ABC));
    abc->a = malloc(10);
    if (!abc->a)
    {
        free(abc);
        return 0;
    }
    return abc;
}