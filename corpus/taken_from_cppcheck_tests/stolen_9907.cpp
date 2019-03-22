void f(char *dummy) {
    int* iVal = 0;
    sscanf(dummy, "%d%d", foo(iVal), iVal);
}