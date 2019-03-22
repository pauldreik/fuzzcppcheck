struct C {
    int x;
    C() {
        bool b = (0 <= SetValue());
    }
    int SetValue() { return x = 1; }
};