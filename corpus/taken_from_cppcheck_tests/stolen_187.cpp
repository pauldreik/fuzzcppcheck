class Fred {
    std::string &foo();
}
std::string &Fred::foo()
{
    std::string s;
    return s;
}