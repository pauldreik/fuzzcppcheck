int foo() {
  struct {
    const char * name() { return "abc"; }
  } table;
}