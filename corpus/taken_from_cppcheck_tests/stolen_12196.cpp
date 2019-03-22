void f()
{
    std::map<int, int> ints;
    std::map<int, int>::reverse_iterator iter;
    iter = ints.rbegin();
    ints.erase(iter);
    std::cout << iter->first << std::endl;
}