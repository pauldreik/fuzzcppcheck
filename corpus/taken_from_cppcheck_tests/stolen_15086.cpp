void foo()
{
    void* ptr = malloc(16);
    ptr[0] = 123;
    free(ptr);
}