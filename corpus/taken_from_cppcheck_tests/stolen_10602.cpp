struct S {
  int* ptr;
};
void foo(S* first, S* second) {
  if(0 <= first.ptr - second.ptr) {} 
}