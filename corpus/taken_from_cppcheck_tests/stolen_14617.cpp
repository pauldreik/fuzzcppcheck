struct AB { int a; int b; };
int f(int x) {
  struct AB *ab;
  if (x == 0) {
    ab = getab();
  }
  if (x == 0 && (ab != NULL || ab->a == 0)) { }
}