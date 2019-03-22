void f()
{
    char a[100];
    strncpy(a, "hello", sizeof(a));
    strncat(a, "world", 20);
}