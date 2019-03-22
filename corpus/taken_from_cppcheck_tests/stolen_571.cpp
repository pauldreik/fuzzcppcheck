void f(char *) {
    dostuff();
}
void test() {
    char buffer[1024];
    f(buffer);
}