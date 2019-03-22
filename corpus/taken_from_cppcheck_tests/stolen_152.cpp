struct F {
  void free(void*) {}
};
void foo() {
  char c1[1];
  F().free(c1);
  char *c2 = 0;
  F().free(&c2);
}