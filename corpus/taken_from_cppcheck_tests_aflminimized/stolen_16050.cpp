namespace A {
    char buf[20];
}
int main() {
    return foo(A::buf);
}