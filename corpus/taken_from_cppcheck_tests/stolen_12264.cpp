void f(std::vector<int> &ints)
{
    std::vector<int>::iterator iter = ints.begin() + 5;
    ints.insert(ints.begin(), 1);
    ++iter;
}