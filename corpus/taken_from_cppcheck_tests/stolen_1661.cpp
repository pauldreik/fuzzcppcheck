struct C {
    int x;
    C() {
        bool b = true;
        b &= SetValue();
    }
    bool SetValue() {
        x = 1;
        return true;
    }
};