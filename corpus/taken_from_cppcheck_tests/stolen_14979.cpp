void foo()
{
    int a;
    char *b = static_cast<char *>(&a);
    *b = 0;
}