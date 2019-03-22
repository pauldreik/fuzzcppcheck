void f()
{
    std::vector<int> ints;
    ints.push_back(1);
    int *first = &ints[0];
    ints.push_back(2);
    *first;
}