void foo() {
    FILE* f(stdout);
    fwrite(buffer, 5, 6, f);
}