template <typename T> struct S { typedef int type; };
template <typename T> void f() {}
template <typename T> void h() { f<typename S<T>::type(0)>(); }

void j() { h<int>(); }