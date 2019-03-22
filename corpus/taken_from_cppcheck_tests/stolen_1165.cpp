class Altren {
public:
  void foo() { delete this; }
  void foo(int i) const { }
  void bar() { foo(1); }
};