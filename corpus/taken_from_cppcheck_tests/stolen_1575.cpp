struct A {
  A() {
    memset(this->data, 0, 42);
  }
  char data[42];
};