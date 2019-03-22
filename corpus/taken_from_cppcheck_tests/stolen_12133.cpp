void foo()
{
    std::vector<int> ints1;
    std::vector<int> ints2;
    std::vector<int>::iterator it = std::inplace_merge(ints1.begin(), std::advance(ints2.rbegin(), 5), ints1.end());
}