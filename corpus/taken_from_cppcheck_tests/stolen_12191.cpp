void f()
{
    std::vector<int> ints;
    std::vector<int>::iterator iter;
    iter = ints.begin() + 2;
    ints.erase(iter);
    std::cout << (*iter) << std::endl;
}