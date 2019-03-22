bool pred(int x);
void foo() {
    for(int& x:v) {
        x++;
        if (pred(x)) {
            x = 1; 
        }
    }
}
