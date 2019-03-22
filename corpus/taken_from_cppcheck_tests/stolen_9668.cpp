static void foo()
{
    struct ABC *abc = malloc(sizeof(struct ABC));
    abc->a = malloc(10);
    if (abc->a)
    { goto out; }
    free(abc);
    return;
out:
    free(abc->a);
    free(abc);
}