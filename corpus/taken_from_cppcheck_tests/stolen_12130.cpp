void foo(const std::set<int> &ints1)
{
    std::set<int> ints2;
    std::set<int>::iterator it1 = ints1.begin();
    std::set<int>::iterator it2 = ints1.end();
    ints2.insert(it1, it2);
}