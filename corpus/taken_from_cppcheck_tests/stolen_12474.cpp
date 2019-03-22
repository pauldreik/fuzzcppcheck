bool pred(int x);
void f();
void foo() {
    for(int x:v) {
        if (pred(x)) {
            f(); 
            break; 
        }
    }
}
