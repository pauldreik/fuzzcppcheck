struct Fred { int i; };
void foo()
{
    struct Fred* ptr = malloc(sizeof(Fred));
    free(ptr);
}