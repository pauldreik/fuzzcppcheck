void f(int *start, int *stop) {
  int length = *start - *stop;
  if (length < 10000)
    length = 10000;
  *stop -= length;
}