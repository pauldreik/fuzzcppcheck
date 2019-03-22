void f() {
    int counter = 0;
    int newCount = InterlockedDecrement(&counter);
    if (newCount == 0)
        destroy();
}
