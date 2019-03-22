struct AB { int a; int b; };
int f() {
  struct AB *ab;
  for (i = 1; i < 10; i++) {
    if (condition && (ab = getab()) != NULL) {
      a = ab->a;
    }
  }
}