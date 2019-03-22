void f()
{
    std::map<int, int> ints;
    std::map<int, int>::iterator iter;
    iter = ints.begin();
    ints.erase(iter);
    std::cout << iter->first << std::endl;
}