struct a {
    a(char* b) {}
};
a g() {
    char c[20];
    a d = c;
    return d;
}
