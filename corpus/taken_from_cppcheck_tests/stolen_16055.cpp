void f(Foo foo)
{
    foo.size = 0;
    return ((uint8_t)(foo).size);
}