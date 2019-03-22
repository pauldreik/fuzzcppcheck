void func1() throw(int) { throw 1; }
void __declspec(nothrow) func2() { throw 1; }
void __declspec(nothrow) func3() { func1(); }
