class A {
  int64_t B = 32768;
  P<uint8_t> m = MakeP<uint8_t>(B);
};
void f() {
  uint32_t a = 42;
  uint32_t b = uint32_t(A ::B / 1024);
  int32_t c = int32_t(a / b);
}
