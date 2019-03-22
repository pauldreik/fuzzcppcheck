struct S {
  S();
};
template <typename T>
struct U {
  static S<T> u;
};
template <typename T>
S<T> U<T>::u;
template S<int> U<int>::u;
S<int> &i = U<int>::u;