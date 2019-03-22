void f() {
    BOOST_FOREACH(const int &i, get_data())
        data.insert(i);
}