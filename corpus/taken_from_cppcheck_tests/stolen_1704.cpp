void myThrowingFoo() throw(MyException) {
  throw MyException();
}
void myNonCatchingFoo() {
  myThrowingFoo();
}
void myCatchingFoo() {
  try {
    myThrowingFoo();
  } catch(MyException &) {}
}
