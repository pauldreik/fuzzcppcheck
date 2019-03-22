void foo() {
    for(int& x:v) {
        f();
        x = 1;
    }
}
