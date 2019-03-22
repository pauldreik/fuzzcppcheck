class Fred {
    std::vector<int> &foo();
};
std::vector<int> &Fred::foo()
{
    static std::vector<int> v;
    return v;
}