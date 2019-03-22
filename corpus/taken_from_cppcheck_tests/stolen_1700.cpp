void func1() noexcept(false) { throw 1; }
void func2() noexcept { throw 1; }
void func3() noexcept(true) { throw 1; }
void func4() noexcept(false) { throw 1; }
void func5() noexcept(true) { func1(); }
void func6() noexcept(false) { func1(); }
