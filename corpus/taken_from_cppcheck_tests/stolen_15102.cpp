struct Fred { int i; };
void foo()
{
    struct Fred* ptr = new Fred();
    ptr->i = 0;
    free(ptr);
}