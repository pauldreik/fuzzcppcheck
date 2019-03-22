bool pred(int x);
bool foo() {
    for(int x:v) {
        if (pred(x)) {
            break; 
        }
    }
    return true;
}
