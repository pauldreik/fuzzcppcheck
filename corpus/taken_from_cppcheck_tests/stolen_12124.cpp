void foo() {
    list<int> l1;
    list<int> l2;
    list<int>::iterator it = l1.begin();
    l2.insert(it, l1.end());
}