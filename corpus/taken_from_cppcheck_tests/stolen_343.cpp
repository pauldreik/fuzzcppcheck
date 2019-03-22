void pivot_big(char *first, int compare(const void *, const void *)) {
  char *a = first, *b = first + 1, *c = first + 2;
  char* m1 = compare(a, b) < 0
      ? (compare(b, c) < 0 ? b : (compare(a, c) < 0 ? c : a))
      : (compare(a, c) < 0 ? a : (compare(b, c) < 0 ? c : b));
}