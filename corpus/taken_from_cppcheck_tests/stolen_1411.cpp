template <class T> struct A {
    A<T>() : x(0) { }
    A<T>(const T & t) : x(t.x) { }
private:
    int x;
};