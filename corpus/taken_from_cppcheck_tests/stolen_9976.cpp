void foo(MythSocket *socket) {
  bool do_write=0;
  if (socket) {
    do_write=something();
  }
  if (do_write) {
    socket->func();
  }
}
void bar() {
  foo(0);
}
