struct C {
    int x;
    C() {
        bool b = true;
        b = (true == SetValue());
    }
    bool SetValue() {
        x = 1;
        return true;
    }
};