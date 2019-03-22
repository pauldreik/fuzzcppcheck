void foo()
{
    std::vector<int> ints1;
    std::vector<int> ints2;
    std::vector<int>::iterator it = std::find_first_of(ints1.begin(), ints2.end(), ints1.begin(), ints1.end());
}