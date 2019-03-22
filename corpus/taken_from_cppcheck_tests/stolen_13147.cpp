typedef void (*fp)();
typedef fp (*fpp)();
void f() {
    fpp x = (fpp)f();
}