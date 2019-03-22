struct A { };
template<class T> class B {};
B<struct A> b1;
B<A> b2;