namespace abc {
template <typename T> struct X { void f(X<T> &x) {} };
}
template <> int X<int>::Y(0);