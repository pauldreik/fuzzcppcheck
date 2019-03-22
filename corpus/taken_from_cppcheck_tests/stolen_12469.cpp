bool pred(int x);
void foo() {
    int n = 0;
    for(int x:v) {
        if (pred(x)) {
            n++; 
        }
    }
}
