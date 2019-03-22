void f() {
    int counter = 0;
    int newCount = InterlockedDecrement(&counter);
    if (0 != newCount)
        return;
    destroy()
}
