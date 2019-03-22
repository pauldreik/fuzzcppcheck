template <class T> struct X { T t; };
template <class C> struct Y { Foo < X< Bar<C> > > _foo; };
Y<int> bar;