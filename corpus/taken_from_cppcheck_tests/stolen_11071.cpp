namespace test16 {
  template <class T> struct foo {
    static void *bar();
  };
  void *test() { return foo<int>::bar(); }
}