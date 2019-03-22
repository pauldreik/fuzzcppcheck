void f()
{
    std::vector<int> ints;
    std::vector<int>::const_iterator end = ints.end();
    ints.push_back(10);
    std::vector<int>::iterator it;
    unsigned int sum = 0;
    for (it = ints.begin(); it != end; ++it)
    {
        sum += *it;
    }
}