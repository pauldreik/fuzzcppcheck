void foo() {
    for(int& x:v) {
        x = 1;
        f();
    }
}
