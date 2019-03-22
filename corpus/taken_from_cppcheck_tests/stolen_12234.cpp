void f(std::list<list<int> >& l) {
    std::list<std::list<int> >::const_iterator i = l.begin();
    std::list<int>::const_iterator j = (*i).begin();
    cout << *j << endl;
}