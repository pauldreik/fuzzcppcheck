static void foo()
{
    Foo *p = 0;
    if (a == 1) {
        p = new FooBar;
    } else { if (a == 2) {
        p = new FooCar; } }
    p->abcd();
}