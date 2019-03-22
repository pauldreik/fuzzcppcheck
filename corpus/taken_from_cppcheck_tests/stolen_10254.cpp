extern int i,j;
int foo() {
    switch(i) {
        default: j=1; break;
    }
    return 0;
    j=2;
}