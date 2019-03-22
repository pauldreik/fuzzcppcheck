template<typename T>
void f(T n) { (void)n; }
static void func() {
    f(0);
    f(0u);
    f(0U);
    f(0l);
    f(0L);
    f(0ul);
    f(0UL);
    f(0ll);
    f(0LL);
    f(0ull);
    f(0ULL);
    f(0.0);
    f(0.0f);
    f(0.0F);
    f(0.0l);
    f(0.0L);
    f('c');
    f(L'c');
    f("string");
    f(L"string");
    f(true);
    f(false);
}