template <typename T> struct S1 {};
void f(S1<double>) {}
template <typename T>
decltype(S1<T>().~S1<T>()) fun1() {};