void foo(int x)
{
    long b;
    if (g()) {
        b =2;
        goto found;
    }

    return;

found:
    int a = b;
}