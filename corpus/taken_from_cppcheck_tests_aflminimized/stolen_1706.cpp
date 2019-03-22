void func1() throw(int) { throw 1; }
void func2() __attribute((nothrow)); void func2() { throw 1; }
void func3() __attribute((nothrow)); void func3() { func1(); }
