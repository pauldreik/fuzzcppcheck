struct FOO {
  void *data;
};
char f(struct FOO foo) {
  char x = *((char*)foo.data+1);
  return x;
}
char f2(struct FOO foo) {
  char x = *((char*)((FOO)foo).data + 1);
  return x;
}
char f3(struct FOO* foo) {
  char x = *((char*)foo->data + 1);
  return x;
}
struct BOO {
  FOO data;
};
void f4(struct BOO* boo) {
  char c = *((char*)boo->data.data + 1);
}
