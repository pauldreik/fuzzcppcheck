struct FOO {
  void *data;
};
char f(struct FOO foo) {
  char x = *((char*)(foo.data+1));
  foo.data++;
  return x;
}
