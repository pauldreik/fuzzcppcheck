void foo()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int>::iterator it1 = l1.begin();
    std::list<int>::iterator it2 = l1.end();
    it1 = l2.end();
    it1 = l1.end();
    if (it1 != it2)
    {
        ++it1;
    }
}