void f()
{
    std::vector<int> foo;
    std::vector<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        if (a) {
            if (b)
                foo.erase(it);
            else
                *it = 0;
        }
    }
}