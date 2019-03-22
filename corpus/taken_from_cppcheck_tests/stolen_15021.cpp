struct S { char c[100]; };
void foo()
{
    char a[100];
    struct S * s = static_cast<struct S *>(a);
}