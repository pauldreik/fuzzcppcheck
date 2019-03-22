void foo() {
    list<int> l1;
    list<int> l2;
    list<int>::iterator it = l1.begin();
    list<int>::iterator end = l1.end();
    l2.insert(it, end);
}