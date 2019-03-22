void f() {
    std::map<int,Foo> x;
    std::map<int,Foo>::const_iterator it;
    for (it = x.find(0)->second.begin(); it != x.find(0)->second.end(); ++it) {}
}