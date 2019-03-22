void foo()
{
    int sz = sizeof((*(struct dummy *)0).x);
}