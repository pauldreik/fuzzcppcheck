namespace A { template<class T, int N> struct Foo {}; }
template<class T> using Bar = A::Foo<T,3>;
Bar<int> b;
