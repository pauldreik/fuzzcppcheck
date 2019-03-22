struct Fred {
    std::list<int> x;
};
struct Wilma {
    Fred f;
    void foo();
};
void Wilma::foo()
{
    if (f.x.size() == 0) {}
}