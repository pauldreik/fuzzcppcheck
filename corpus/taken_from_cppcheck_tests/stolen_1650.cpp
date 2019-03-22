struct C {
    int x;
    C() {
        bool b = false;
        b = true || SetValue();
    }
    bool SetValue() {
        x = 1;
        return true;
    }
};