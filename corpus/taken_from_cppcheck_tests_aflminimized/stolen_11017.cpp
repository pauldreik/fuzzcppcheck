template <class b, int c, class>
auto d() -> typename a<decltype(b{})>::e {
  d<int, c, int>();
}