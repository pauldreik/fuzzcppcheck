void test() {
   MyObj& obj = *new MyObj;
   delete &obj;
}