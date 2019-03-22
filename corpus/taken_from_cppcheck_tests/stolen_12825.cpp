void foo(std::string a) { }
void foo(long long a) { }
void func(char* cp) {
    foo(0);
    foo(0L);
    foo(0.f);
    foo(bar());
    foo(cp);
    foo("");
}