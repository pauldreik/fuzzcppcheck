void f(Foo *foo) {
    if (!dynamic_cast<bar *>(foo)) {
        *foo = 0;
    }
}