void f() {
    try {
        bar();
    }
    catch(int err) {
        foo(err);
    }
}