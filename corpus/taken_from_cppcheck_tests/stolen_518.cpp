class A {
 int indices[2];
 void foo(int indices[3]);
};

void A::foo(int indices[3]) {
 for(int j=0; j<3; ++j) {
  int b = indices[j];
 }
}