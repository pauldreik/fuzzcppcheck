struct AB { int a; int b; } ab;
void foo()
{
    int * a = &ab.a;
    *a = 0;
}