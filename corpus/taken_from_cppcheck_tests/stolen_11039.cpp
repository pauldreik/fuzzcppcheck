namespace sample {
  template <typename T>
  class Sample {
  public:
    T function(T t);
  };
  template <typename T>
  T Sample<T>::function(T t) {
    return t;
  }
}
sample::Sample<int> s1;