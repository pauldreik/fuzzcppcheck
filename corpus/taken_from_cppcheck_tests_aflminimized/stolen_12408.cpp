void f()
{
    int x=1;
    std::string s1, s2;
    s1 = s1.substr();
    s2 = s1.substr(x);
    s1 = s2.substr(0, x);
    s1 = s2.substr(0,std::string::npos);
    s1 = s2.substr(x+5-n, 0);
};