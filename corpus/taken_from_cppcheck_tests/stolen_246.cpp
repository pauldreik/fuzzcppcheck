auto g(int& a) {
    return [&](){ return a; };
}
