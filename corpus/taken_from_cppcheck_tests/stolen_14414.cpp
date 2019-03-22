void f() {
    int x;
    if (abc) { x = 123; }
    else { a = ({b=c;}); x = 456; }
    ++x;
}