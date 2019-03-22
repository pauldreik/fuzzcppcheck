namespace NS {
    class Except {
    };
}
void foo(int i)
{
    int *pi = new int;
    if (i == 42) {
        delete pi;
        throw ::NS::Except();
    }
    delete pi;
}