template <typename T> struct E { typedef int Int; };
template <typename T> struct C { };
template <typename T> struct D { static int f() { return C<T>::f(); } };
template <typename T> inline int f2() { return D<T>::f(); }
template <typename T> int f1 (int x, T *) { int id = f2<T>(); return id; }
template <typename T> struct B { void f3(B<T> & other) { } };
struct A { };
template <> struct C<B<A>> {
    static int f() { return f1<B<A>>(0, reinterpret_cast<B<A>*>(E<void*>::Int(-1))); }
};
int main(void) {
    C<A> ca;
    return 0;
}