void foo()
{
    std::list<int> l1;
    std::list<int> l2(10, 4);
    std::list<int>::iterator it1 = l1.begin();
    std::list<int>::iterator it2 = l2.find(4);
    while (it1 != it2)
    {
        ++it1;
    }
}