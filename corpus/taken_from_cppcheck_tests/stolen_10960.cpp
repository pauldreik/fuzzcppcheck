struct A { };
template<class T> struct B { };
template<class T> struct C { };
C< B<A> > c;