struct FOO {
  void *data;
};
void f2(struct FOO* foo) {
  (foo[0]).data++;
}