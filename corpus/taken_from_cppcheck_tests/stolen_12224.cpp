void f(int x)
{
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
    {
        foo.erase(it);
        if (x)            return;
    }
}