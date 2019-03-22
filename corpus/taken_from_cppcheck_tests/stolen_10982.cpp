template <class T> class Fred { void f(); };
template <class T> void Fred<T>::f() { }
template<> void Fred<float>::f() { }
template<> void Fred<int>::f() { }
