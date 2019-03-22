struct A {
    std::vector<int> ints;
};

void f()
{
    std::vector<int> ints;
    A a;
    std::vector<int>::const_iterator i = ints.begin();
    std::vector<int>::const_iterator e = ints.end();
    while (i != e)
    {
        a.ints.push_back(*i);
        ++i;
    }
}