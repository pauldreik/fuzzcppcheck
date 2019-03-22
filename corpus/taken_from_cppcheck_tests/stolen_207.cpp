template<class T>
int& f(int& x, T y) {
    x += y;
    return x;
}
