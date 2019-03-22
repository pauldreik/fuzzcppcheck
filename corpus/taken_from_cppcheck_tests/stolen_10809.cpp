int f() {
    int counter = 0;
    if (::InterlockedDecrement(&counter) == 0) {
        destroy();
        return 0;
    }
    return counter;
}
