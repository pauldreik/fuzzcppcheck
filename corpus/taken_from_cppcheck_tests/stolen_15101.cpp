struct Fred { int i; };
void foo()
{
    struct Fred* ptr = new Fred();
    free(ptr);
}