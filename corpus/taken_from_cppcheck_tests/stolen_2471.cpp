void foo(FILE*& f) {
    f = fopen(name, "r");
    f = g;
    fwrite(buffer, 5, 6, f);
}