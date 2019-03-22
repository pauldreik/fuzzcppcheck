struct Fred { int x; int y; };
void f() {
  struct Fred fred[10];
  fred[1].x = 0;
}