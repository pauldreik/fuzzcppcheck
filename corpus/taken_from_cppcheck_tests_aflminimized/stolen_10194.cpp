void f() {
  int x;
  switch (state) {
  case 1: x = 3; goto a;
  case 1: x = 6; goto a;
  }
}