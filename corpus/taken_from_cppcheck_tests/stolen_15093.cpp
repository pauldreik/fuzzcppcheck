struct Fred { int i; };
void foo()
{
    Fred* ptr = malloc(sizeof(Fred));
    free(ptr);
}