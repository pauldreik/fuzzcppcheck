void foo()
{
    std::vector<int> foo;
    foo.push_back(1);
    for (unsigned int ii = 0; ii <= foo.size(); ++ii)
    {
    }
    int ii = 0;
    foo[ii] = 0;
}