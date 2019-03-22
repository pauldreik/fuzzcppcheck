void foo(std::vector<std::string> &test)
{
    std::set<int> result;
    for (std::vector<std::string>::const_iterator cit = test.begin();
        cit != test.end();
        ++cit)
    {
        result.insert(cit->size());
    }
}