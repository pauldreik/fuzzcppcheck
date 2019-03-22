struct AB {
  int a;
  int b;
};

void fun() {
  AB ab;
  int &a = ab.a;
  ab.a = 123;
  dostuff(a);
}