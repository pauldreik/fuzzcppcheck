struct IMAPARG {
  void *text;
};

void fun() {
  IMAPARG *args, aatt;
  args = &aatt;
  aatt.text = tmp;
  dostuff(args);
}