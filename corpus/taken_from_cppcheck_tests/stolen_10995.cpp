template <class T> struct C1 {};
template <class T> void f() { x = y ? C1<int>::allocate(1) : 0; }
template <class T, unsigned S> class C3 {};
template <class T, unsigned S> C3<T, S>::C3(const C3<T, S> &v) { C1<T *> c1; }
C3<int,6> c3;