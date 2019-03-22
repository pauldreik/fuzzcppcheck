void f() {
    std::map<int, int> map1;
    std::map<int, int> map2;
    std::map<int, int>::const_iterator it = map1.find(123);
    if (it == map2.end()) { }}