template <int I> void f() {
    if (I >= 0 && I < 3) {}
}

static auto a = f<0>();