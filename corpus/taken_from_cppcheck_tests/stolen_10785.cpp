void f() {
    int counter = 0;
    InterlockedDecrement(&counter);
    whatever();
}
