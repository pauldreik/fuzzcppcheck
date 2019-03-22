bool pred(int x);
void f(int x);
void foo() {
    for(int x:v) {
        if (pred(x)) {
            f(x); 
            break; 
        }
    }
}
