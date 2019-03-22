std::vector<int> &foo()
{
    static std::vector<int> v;
    return v;
}