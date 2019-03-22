void f() {
  z_stream strm;
  char* buf = malloc(10);
  strm.next_out = buf;
  deflate(&strm, Z_FINISH);
  memcpy(body, buf, 10);
}