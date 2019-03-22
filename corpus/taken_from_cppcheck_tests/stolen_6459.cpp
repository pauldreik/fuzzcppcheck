void foo(signed char sc, unsigned char uc, short int si, unsigned short int usi) {
  printf("%hhx %hhd", sc, uc);
  printf("%hd %hu", si, usi);
}