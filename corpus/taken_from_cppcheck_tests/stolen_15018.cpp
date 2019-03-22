struct S { char c[100]; };
void foo()
{
    char a[100];
    struct S * s = (struct S *)a;
    s->c[0] = 0;
}