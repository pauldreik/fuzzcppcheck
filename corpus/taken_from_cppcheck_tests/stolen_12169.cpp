void foo()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int>::iterator it1 = l1.end();
    std::list<int>::iterator it2 = l2.begin();
    if (it1 != it2)
    {
    }
    if (it2 != it1)
    {
    }
}