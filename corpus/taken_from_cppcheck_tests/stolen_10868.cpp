void g(int);
void f(int x) {
   g((int)((x & 0x01) >> 7));
}
