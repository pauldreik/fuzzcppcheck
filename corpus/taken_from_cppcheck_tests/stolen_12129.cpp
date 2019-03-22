void foo()
{
    std::vector<int> ints1;
    std::vector<int> ints2;
    std::vector<int>::iterator it = std::find(ints1.begin(), ints2.end(), 22);
}