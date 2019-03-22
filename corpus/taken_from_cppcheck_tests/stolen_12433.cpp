void f()
{
    std::vector<int> ints;
    auto iter = ints.begin() + 2;
    ints.erase(iter);
    std::cout << (*iter) << std::endl;
}