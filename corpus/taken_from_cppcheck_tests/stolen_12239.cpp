void f()
{
    std::set<int> foo;
    for (std::set<int>::iterator it = foo.begin(); it != foo.end(); ++it)
    {
        foo.erase(*it);
    }
}