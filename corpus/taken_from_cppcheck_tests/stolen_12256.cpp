void f()
{
    std::vector<int> foo;
    foo.push_back(10);
    std::vector<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); it++)
    {
        foo.push_back(123);
    }
}