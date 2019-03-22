void foo(intmax_t im, uintmax_t uim, size_t s, ptrdiff_t p, long double ld, std::size_t ss, std::ptrdiff_t sp) {
  printf("%jb %jw", im, uim);
  printf("%zr", s);
  printf("%tm", p);
  printf("%La", ld);
  printf("%zv", ss);
  printf("%tp", sp);
}