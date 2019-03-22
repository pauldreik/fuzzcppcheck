template<typename T, typename U>
void f(T t, U u) { }
static void func() {
    f(0, 0.0);
    f(0.0, 0);
}