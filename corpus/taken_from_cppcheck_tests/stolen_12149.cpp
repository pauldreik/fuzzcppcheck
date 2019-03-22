void f() {
    std::vector<int> a;
    std::vector<int> t;
    std::vector<int>::const_iterator it;
    if(z)
        it = a.begin();
    else
        it = t.begin();
    while (z && it!=a.end())
        v++it;
    while (!z && it!=t.end())
        v++it;
}