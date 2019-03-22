void f() {
    try {
        bar();
    }
    catch(exception* const err) {
        foo(err);
    }
}