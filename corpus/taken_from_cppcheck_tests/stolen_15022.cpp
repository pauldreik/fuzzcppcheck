struct S { char c[100]; };
void foo()
{
    char a[100];
    const struct S * s = static_cast<const struct S *>(a);
}