int f() {
    int result;
    int *res[] = {&result};
    foo(res);
    return result;
}