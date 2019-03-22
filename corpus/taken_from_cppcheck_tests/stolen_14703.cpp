void use(int *p) { a = *p + 3; }
void call(int x, int *p) { x++; use(p); }
int main() {
  int x;
  call(4,&x);
}