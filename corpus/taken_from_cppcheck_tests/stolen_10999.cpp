template <class T> struct Fred {
    const int ** foo();
};
template <class T> const int ** Fred<T>::foo() { return nullptr; }
Fred<int> fred;