void f(const std::vector<int> &foo)
{
    std::vector<int>::const_iterator it = foo.begin();
    foo.push_back(123);
    *it;
}