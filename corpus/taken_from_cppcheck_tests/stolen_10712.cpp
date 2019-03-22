void foo() {
    char *p = 0;
    try {
        if(z) {
            p = fred();
            p = wilma();
        }
    }
    catch (...) {
        barney(p);
    }
}