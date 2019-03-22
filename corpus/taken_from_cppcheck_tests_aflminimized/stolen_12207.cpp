void foo()
{
    std::vector<int> foo;
    for (unsigned int ii = 0; ii <= foo.size(); ++ii)
    {
        if (ii == foo.size())
        {
        }
        else
        {
            foo[ii] = 0;
        }
    }
}