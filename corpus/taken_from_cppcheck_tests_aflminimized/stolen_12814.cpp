int foo(int x);
void foo();
void bar() {
    foo();
    foo(1);
}