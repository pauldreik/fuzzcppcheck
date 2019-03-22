void addNewFunction(Scope**scope, const Token**tok);
void f(Scope *x) {
  x->functionList.back();
  addNewFunction(&x,&tok);
  if (x) {}
}