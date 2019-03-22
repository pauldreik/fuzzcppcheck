void f(std::list<list<int> >& l) {
    std::list<foo>::const_iterator i;
    bar(i);
    cout << *i;
}