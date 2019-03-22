void use(int *p) { a = *p + 3; }
void call(int x, int *p) { x++; use(p); }
int main() {
  call(4,0);
}