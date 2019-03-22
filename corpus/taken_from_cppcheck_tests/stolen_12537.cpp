void f() {
  struct { struct { char *str; } x; } a;
  return *a.x.str == '\0';}