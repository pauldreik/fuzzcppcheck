void f() {
    set<int> data;
    BOOST_FOREACH(const int &i, data) {
        data.erase(123);
    }
}