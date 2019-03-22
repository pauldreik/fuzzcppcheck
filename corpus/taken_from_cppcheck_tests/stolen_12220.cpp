void f()
{
    std::list<int> foo;
    std::list<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        if (*it == 123)
            foo.erase(it);
    }
}