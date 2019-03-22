static void f()
{
    struct ABC
    {
        char str[5];
    };
    struct ABC *abc = malloc(sizeof(struct ABC));
    strcpy( abc->str, "abcdef" );
    free(abc);
}