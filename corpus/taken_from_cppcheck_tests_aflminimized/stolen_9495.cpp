void f() {
    char *cPtr = new char[100];
    delete[] cPtr;
    cPtr = new char[100]('x');
    delete[] cPtr;
    cPtr = new char[100];
    delete cPtr;
}