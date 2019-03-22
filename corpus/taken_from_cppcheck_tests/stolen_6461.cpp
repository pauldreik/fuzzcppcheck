void foo(intmax_t im, uintmax_t uim, size_t s, ptrdiff_t p, long double ld, std::size_t ss, std::ptrdiff_t sp) {
  printf("%jd %jo", im, uim);
  printf("%zx", s);
  printf("%ti", p);
  printf("%Lf", ld);
  printf("%zx", ss);
  printf("%ti", sp);
}