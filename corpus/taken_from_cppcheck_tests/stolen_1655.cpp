struct C {
    int x;
    C() {
        int i = 0;
        i = i % SetValue();
    }
    int SetValue() { return x = 1; }
};