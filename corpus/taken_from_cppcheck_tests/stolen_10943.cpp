template <class T> class A { public:  ~A(); };
template <class T> A<T>::~A() {}
A<int> a;
