void f(std::list<int> &ints)
{
    std::list<int>::iterator i = ints.begin();
    i = ints.erase(i);
    *i = 0;
}