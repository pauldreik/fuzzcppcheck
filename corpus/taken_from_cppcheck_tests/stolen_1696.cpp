void f() {
    try {
        bar();
    }
    catch(exception* err) {
        foo(err);
    }
}