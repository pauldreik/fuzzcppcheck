class A {
  const B&b;
};
void f() {
  A a;
  memset(&a, 0, sizeof(a)); 
}