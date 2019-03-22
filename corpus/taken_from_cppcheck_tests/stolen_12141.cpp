void foo(std::vector<int> &r, int c)
{
    std::vector<int>::iterator aI = r.begin();
    while(aI != r.end())
    {
        if (*aI == 0)
        {
            r.insert(aI, 42);
            if (c)
            {
                return;
            }
        }
        ++aI;
    }
}