template<class T> struct A { };
template<class T> struct B { };
template<class T> struct C { A<B<X<T> > > ab; };
C<int> c;