template<class T, int N> struct Foo {};
template<class T> using Bar = Foo<T,3>;
Bar<int> b;
