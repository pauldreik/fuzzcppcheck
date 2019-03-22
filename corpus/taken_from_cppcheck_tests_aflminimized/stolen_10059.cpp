void foo(Test &test) {
  int& x = test.getData();
  if (test.process())
    x = 0;
}