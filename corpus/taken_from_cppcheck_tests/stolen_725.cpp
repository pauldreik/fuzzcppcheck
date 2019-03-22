void f(int condition) {
    char str[5];
    mysprintf(str, "test%s", condition ? "12" : "34");
}