bool pred(int x);
void foo() {
    for(int& x:v) {
        if (pred(x)) {
            x = x + 1; 
        }
    }
}
