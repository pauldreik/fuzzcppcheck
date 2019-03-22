struct Fred { int i; };
void foo()
{
    struct Fred* ptr = malloc(sizeof(Fred));
    ptr->i = 0;
    free(ptr);
}