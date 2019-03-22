void foo()
{
    int a[10];
    char *b = static_cast<char *>(a);
    *b = 0;
}