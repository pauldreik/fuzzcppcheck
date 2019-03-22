class A {
  public:
    A() : foo(false) {};
    virtual bool One(bool b = false) { foo = b; return false; }
  private:
    bool foo;
};
class B : public A {
  public:
    B() {};
    bool One(bool b = false) { return false; }
};