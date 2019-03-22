void f () {
  int szHdr;
  idx = ((aKey<0x80) ? ((szHdr)=aKey), 1 : sqlite3GetVarint32(&(szHdr)));
  d = szHdr;
}