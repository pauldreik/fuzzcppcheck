void f()
{
    std::list<int>::iterator it = foo.begin();
    for (; it != i2; ++it)
    {
        foo.erase(it);
    }
}