void foo()
{
    list<int> l1;
    list<int> l2;
    list<int>::iterator it = l1.begin();
    while (l2.end() != it)
    {
        ++it;
    }
}