void f(int *p) {
    a = *p;
}
int main() {
  int x;
  f(&x);
}