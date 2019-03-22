template <class T> struct Container {
  Container();
  T* mElements;
};
template <class T> Container<T>::Container() : mElements(nullptr) {}
Container<int> intContainer;