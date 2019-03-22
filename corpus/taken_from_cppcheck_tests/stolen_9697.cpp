struct S {
  void *state_check_buff;
};
void f() {
  S s;
  (s).state_check_buff = (void* )malloc(1);
  if (s.state_check_buff == 0)
    return;
}