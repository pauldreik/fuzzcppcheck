void f() {
    auto x = *myList.begin();
    myList.erase(x);
    auto b = x.first;
}