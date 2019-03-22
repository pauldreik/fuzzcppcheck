struct C {
    int x;
    C() {
        bool b = true;
        b = b & SetValue();
    }
    bool SetValue() {
        x = 1;
        return true;
    }
};