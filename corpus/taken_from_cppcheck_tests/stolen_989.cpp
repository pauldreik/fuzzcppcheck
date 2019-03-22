struct st {
  std::uint8_t a;
  std::uint8_t b;
  std::uint8_t c;
};

void f() {
  st s;
  std::memset(&s, 0, sizeof(st));
}