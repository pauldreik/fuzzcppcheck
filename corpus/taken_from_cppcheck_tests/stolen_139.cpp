struct foo *f()
{
    extern struct foo f;
    return &f;
}