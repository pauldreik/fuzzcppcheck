struct Fred {
    void foo();
    std::list<int> x;
};
void Fred::foo()
{
    if (x.size() == 0) {}
}