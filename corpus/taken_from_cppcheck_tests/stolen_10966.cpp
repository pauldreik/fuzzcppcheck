enum A { };
template<class T> class B {};
B<enum A> b1;
B<A> b2;