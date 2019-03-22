void f(void *data) {
  unsigned char* c = (unsigned char *)data++;
  unsigned char* c2 = (unsigned char *)++data;
}