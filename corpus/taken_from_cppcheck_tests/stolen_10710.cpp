void foo() {
    char *p = 0;
    try {
        p = fred();
        p = wilma();
    }
    catch (...) {
        barney(p);
    }
}