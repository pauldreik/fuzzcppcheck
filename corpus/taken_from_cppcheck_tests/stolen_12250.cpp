void f()
{
    std::vector<int>::const_iterator it = foo.begin();
    foo.push_back(123);
    {
        int *it = &foo[0];
        *it = 456;
    }
}