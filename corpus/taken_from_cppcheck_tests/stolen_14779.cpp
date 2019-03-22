struct bstr { char *bstart; size_t len; };
struct bstr bstr0(void) {
  return (struct bstr){"hello",6};
}