namespace NS {
template <typename T> union C {
  char dummy[sizeof(T)];
  T value;
  C();
  ~C();
  C(const C &);
  C & operator = (const C &);
};
}
NS::C<int> intC;
template <typename T> NS::C<T>::C() {}
template <typename T> NS::C<T>::~C() {}
template <typename T> NS::C<T>::C(const NS::C<T> &) {}
template <typename T> NS::C<T> & NS::C<T>::operator=(const NS::C<T> &) {}