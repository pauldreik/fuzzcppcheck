void foo()
{
    std::set<int> s1;
    std::set<int> s2;
    for (std::set<int>::iterator it = s1.begin(); it != s1.end(); ++it)
    {
        if (true) { }
        if (it != s2.end()) continue;
    }
}