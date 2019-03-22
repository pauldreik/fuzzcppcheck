void f() {
  int szHdr;
  idx = (A<0x80) ? (szHdr = 0) : dostuff(A, (int *)&(szHdr));
  d = szHdr;
}