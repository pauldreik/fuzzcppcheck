template <class T> struct Container {
  Container();
  Container(const Container &);
  Container & operator = (const Container &);
  ~Container();
  T* mElements;
  const Container * c;
};
template <class T> Container<T>::Container() : mElements(nullptr), c(nullptr) {}
template <class T> Container<T>::Container(const Container & x) { nElements = x.nElements; c = x.c; }
template <class T> Container<T> & Container<T>::operator = (const Container & x) { mElements = x.mElements; c = x.c; return *this; }
template <class T> Container<T>::~Container() {}
Container<int> intContainer;