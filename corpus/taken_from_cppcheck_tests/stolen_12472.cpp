bool pred(int x);
bool foo() {
    for(int x:v) {
        if (pred(x)) {
            return false; 
        }
    }
    return true;
}
