void foo(int a) { }
void foo(float a) { }
void foo(void* a) { }
void foo(bool a) { }
void func(int i, float f, bool b) {
    foo(i + i);
    foo(f + f);
    foo(!b);
    foo(i > 0);
    foo(f + i);
}