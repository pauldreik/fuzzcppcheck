class Fred {
    std::vector<int> &foo();
};
std::vector<int> &Fred::foo()
{
    std::vector<int> v;
    return v;
}