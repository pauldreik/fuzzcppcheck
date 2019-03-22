void* foo() {
    struct ABC abc;
    abc.a = malloc(10);
    return abc.a;
}