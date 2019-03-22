void foo()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int>::iterator it1 = l1.begin();
    std::list<int>::iterator it2 = l1.end();
    { it2 = l2.end(); }
    while (it1 != it2)
    {
        ++it1;
    }
}