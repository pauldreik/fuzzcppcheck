void foo() {
  goto label;
  for (int i = 0; i < 0; ++i) {
    ;
label:
    ;
  }
}