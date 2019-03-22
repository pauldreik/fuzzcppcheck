void func1() throw(int) { throw 1; }
void func2() throw() { throw 1; }
void func3() throw(int) { throw 1; }
void func4() throw() { func1(); }
void func5() throw(int) { func1(); }
