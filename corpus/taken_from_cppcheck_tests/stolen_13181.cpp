template<class T> struct Container {
  Container();
  int* mElements;
};
template <class T> Container<T>::Container() : mElements(nullptr) {}
Container<int> intContainer;