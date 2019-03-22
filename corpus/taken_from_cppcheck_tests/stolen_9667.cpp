static void foo(int a)
{
    ABC *abc = malloc(sizeof(ABC));
    abc->a = malloc(10);
    if (a == 1)
    {
        free(abc->a);
        return;
    }
}