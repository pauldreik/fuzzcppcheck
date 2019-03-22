struct FOO {
  void *data;
};
char f(struct FOO* foo) {
  *(foo[1].data + 1) = 0;
}
