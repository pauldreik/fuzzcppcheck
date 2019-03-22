void f() {
    struct AB {
        AB(int a) { }
    };

    const AB ab[3] = { AB(0), AB(1), AB(2) };
}
