struct C { std::list<int> l1; void func(); };
void C::func() {
    std::list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it) { }
    C c;
    for (it = c.l1.begin(); it != c.l1.end(); ++it) { }
}