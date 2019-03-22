void f(std::vector<ints> &ints)
{
    std::vector<int>::iterator iter;
    iter = ints.begin() + 2;
    ints.erase(iter);
    ints.erase(iter);
}