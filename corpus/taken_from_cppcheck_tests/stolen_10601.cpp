struct S {
  int* ptr;
};
void foo(S* first) {
  if((first.ptr) >= 0) {} 
}