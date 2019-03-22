void f() {
  int x = 0;
  dostuff(std::ref(x));
  x = 1;
}