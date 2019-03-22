void func1() __attribute__((pure)) __attribute__((nothrow)) __attribute__((const));
void func2() __attribute__((__pure__)) __attribute__((__nothrow__)) __attribute__((__const__));
void func3() __attribute__((nothrow)) __attribute__((pure)) __attribute__((const));
void func4() __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__const__));void func5() __attribute__((noreturn));