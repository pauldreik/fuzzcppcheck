template<class T>
class A { public: T x; };

template<class M>
class C: public A<char[M]> {};

C<2> a;
