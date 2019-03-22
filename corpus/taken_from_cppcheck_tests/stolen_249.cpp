auto g(int& a) {
    int& p = a;
    return [&](){ return p; };
}
