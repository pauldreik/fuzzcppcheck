void f()
{
    std::vector<int> ints;
    std::vector<int>::iterator iter = ints.begin();
    ints.insert(iter, 1);
}