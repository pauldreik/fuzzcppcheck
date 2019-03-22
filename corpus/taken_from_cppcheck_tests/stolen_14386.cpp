void f()
{
    static const struct ab {
        int a,b;
        int get_a() { return a; }    } = { 0, 0 };
}