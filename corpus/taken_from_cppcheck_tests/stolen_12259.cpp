void f(std::vector<int> &foo)
{
    std::vector<int>::const_iterator it = foo.begin();
    foo.reserve(100);
    *it = 0;
}