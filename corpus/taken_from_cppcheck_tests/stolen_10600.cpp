struct S {
  int* ptr;
};
void foo(S* first, S* second) {
  if((first.ptr - second.ptr) >= 0) {} 
}