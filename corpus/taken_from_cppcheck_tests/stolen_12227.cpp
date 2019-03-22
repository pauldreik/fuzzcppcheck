void f()
{
    std::vector<int> foo;
    std::vector<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        foo.erase(it);
        return;
    }
}