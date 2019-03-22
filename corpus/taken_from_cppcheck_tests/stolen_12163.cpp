void foo()
{
    std::list<int> l1;
    std::list<int>::iterator it1 = l1.begin();
    {
        std::list<int> l1;
        if (it1 != l1.end())
        {
        }
    }
}