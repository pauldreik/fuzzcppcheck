void foo()
{
    const std::string s(x());
    strchr(s.c_str(), ',');
}