void f()
{
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
    {
        foo.erase(it);
        if (x)            break;
    }
}