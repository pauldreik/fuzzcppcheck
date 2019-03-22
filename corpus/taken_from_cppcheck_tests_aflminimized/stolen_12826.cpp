void foo(std::string a) { }
void foo(double a) { }
void foo(long long a) { }
void foo(int* a) { }
void foo(void* a) { }
void func(int i, const float f, int* ip, float* fp, char* cp) {
    foo(0);
    foo(0L);
    foo(0.f);
    foo(false);
    foo(bar());
    foo(i);
    foo(f);
    foo(&i);
    foo(&f);
    foo(ip);
    foo(fp);
    foo(cp);
    foo("");
}