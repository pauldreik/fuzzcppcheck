template <typename T> struct C {};
template <typename T> struct S {a};
template <typename T> struct S<C<T>> {b};
S<int> s;