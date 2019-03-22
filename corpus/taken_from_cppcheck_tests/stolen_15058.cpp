void f(Foo &foo) {
    std::set<int>::iterator x = foo.dostuff();
    *(x) = 0;
}