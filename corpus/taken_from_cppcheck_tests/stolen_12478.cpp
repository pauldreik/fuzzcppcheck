bool pred(int x);
bool foo() {
    bool b = false;
    for(int x:v) {
        if (pred(x)) {
            b &= true;
        }
    }
    return true;
}
