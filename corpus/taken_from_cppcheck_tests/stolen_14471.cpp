void f() {
    int *n = ({ typeof(*n) z;  (typeof(*n)*)z; })
}