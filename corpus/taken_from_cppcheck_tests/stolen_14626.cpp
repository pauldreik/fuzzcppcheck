void test2() {
  struct { char type; } s_d;
  if (foo(&s_d.type)){}
}