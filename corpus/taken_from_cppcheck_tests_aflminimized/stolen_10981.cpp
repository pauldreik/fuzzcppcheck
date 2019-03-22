template <class T> class Fred { void f(); void g(); };
template <class T> void Fred<T>::f() { }
template <class T> void Fred<T>::g() { }
template void Fred<float>::f();
template void Fred<int>::g();
