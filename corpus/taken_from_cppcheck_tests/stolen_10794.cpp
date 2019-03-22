void f() {
    int counter = 0;
    InterlockedDecrement(&counter);
    if (counter <= 0)
        destroy();
}
