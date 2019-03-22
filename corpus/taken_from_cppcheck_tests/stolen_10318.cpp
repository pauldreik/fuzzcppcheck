class ios_base {
public:
  class Init {
  public:
  };
};
class foo {
public:
  foo();
  void Init(int);
};
foo::foo() {
  Init(0);
  do_something();
}
