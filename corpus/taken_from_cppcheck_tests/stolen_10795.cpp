void f() {
    int counter = 0;
    InterlockedDecrement(&counter);
    if (0 >= counter)
        destroy();
}
