class A {
  static int open() {
    return 1;
  }

  A() {
    int ret = open();
  }
};
