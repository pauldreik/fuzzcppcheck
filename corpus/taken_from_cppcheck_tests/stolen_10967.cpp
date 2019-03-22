template <class T> class A {
  T mT;
public:
  void foo() {}
};

int main() {
    A<A<BLA>>   gna1;
    A<BLA>      gna2;
}
