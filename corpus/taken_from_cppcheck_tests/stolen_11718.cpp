extern "C" void abort ();
template <int a> inline int fact2 ();
template <int a> inline int fact () {
  return a * fact2<a-1> ();
}
template <> inline int fact<1> () {
  return 1;
}
template <int a> inline int fact2 () {
  return a * fact<a-1>();
}
template <> inline int fact2<1> () {
  return 1;
}
int main() {
  fact2<3> ();
  fact2<2> ();
}