void bar(int i) {}
void f(int i) {
    i = 1;
    bar(i);
    i = 1;
}