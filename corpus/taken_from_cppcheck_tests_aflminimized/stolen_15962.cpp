namespace foo {
struct Bar {
  explicit Bar(int type);
  void f();
  int type;
};

Bar::Bar(int type) : type(type) {}

void Bar::f() {
  type = 0;
}
}