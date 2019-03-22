struct AB { int a; int b; };
void foo()
{
    struct AB ab;
    int * a = &ab.a;
}