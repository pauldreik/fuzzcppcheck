void f() {
    set<int> data;
    BOOST_FOREACH(int i, data) {
        data.insert(123);
    }
}