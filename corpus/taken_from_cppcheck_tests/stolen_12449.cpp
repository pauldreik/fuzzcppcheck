bool f(int);
void foo() {
    bool b = false;
    for(int x:v)
        b &= f(x);
}
