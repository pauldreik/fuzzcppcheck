void g(int);
void f(int x) {
   g((x & 0x01) >> 7);
}
