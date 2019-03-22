void foo() {
  int bar;
  printf("%1$d");
  printf("%1$d, %d, %4$d", 1, 2, 3);
  scanf("%2$d", &bar);
  printf("%0$f", 0.0);
}