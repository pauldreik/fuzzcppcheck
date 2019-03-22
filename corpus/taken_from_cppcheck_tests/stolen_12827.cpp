void foo(int* a) { }
void foo(const int* a) { }
void foo(void* a) { }
void foo(const float a) { }
void foo(bool a) { }
void foo2(Foo* a) { }
void foo2(Foo a) { }
void func(int* ip, const int* cip, const char* ccp, char* cp, float f, bool b) {
    foo(ip);
    foo(cip);
    foo(cp);
    foo(ccp);
    foo(f);
    foo(b);
    foo2(0);
    foo2(nullptr);
    foo2(NULL);
}