void f()
{
    std::set<int> foo;
    std::set<int>::iterator it = foo.begin();
    foo.erase(*it);
}