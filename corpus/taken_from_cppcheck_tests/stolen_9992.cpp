void f(int *fp) {
    a = *fp;
}
int main() {
  int *p = 0;
  f(p);
}