template <class T> union Fred {
    char dummy[sizeof(T)];
    T value;
};
Fred<int> fred;