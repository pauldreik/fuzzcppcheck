void f()
{
    std::string s1, s2;
    s1.compare(s2);
    s2.compare(s2);
    s1.compare(s2.c_str());
    s1.compare(0, s1.size(), s1);
};