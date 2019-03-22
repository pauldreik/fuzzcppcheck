void f() {
    int x = ({ 1 + 2; });
    int y = 1 + (x ? y : y);
}