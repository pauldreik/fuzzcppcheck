void x()
{
    char* ptr = malloc(10);
    foo(ptr);
    free(ptr);
}