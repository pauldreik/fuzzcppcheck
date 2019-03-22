void f() {
    vector<int> data;
    BOOST_FOREACH(int i, data) {
        data.push_back(123);
    }
}