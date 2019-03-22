template<class T>
struct A {
    T f(const T a, const T b) {
        return a < b ? b : a;
    }
};
