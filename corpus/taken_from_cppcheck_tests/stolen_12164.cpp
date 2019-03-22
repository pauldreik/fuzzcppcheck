void foo()
{
    std::list<int> l1;
    std::list<int>::iterator it1 = l1.begin();
    {
        std::list<int> l1;
        if (l1.end() > it1)
        {
        }
    }
}