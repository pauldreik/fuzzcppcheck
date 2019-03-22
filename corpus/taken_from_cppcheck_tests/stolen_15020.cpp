struct S { char c[100]; };
void foo()
{
    char a[100];
    const struct S * s = (const struct S *)a;
}