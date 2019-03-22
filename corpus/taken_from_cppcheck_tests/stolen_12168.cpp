std::list<int> l3;
std::list<int>::iterator bar()
{
    return l3.end();
}
void foo()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int>::iterator it1 = l1.begin();
    std::list<int>::iterator it2 = l2.begin();
    it1 = bar();
    while (it1 != it2)
    {
        ++it1;
    }
}