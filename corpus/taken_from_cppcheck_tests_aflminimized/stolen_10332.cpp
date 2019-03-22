int f() {
   return shift < sizeof(int64_t)*8 ? 1 : 2;
}