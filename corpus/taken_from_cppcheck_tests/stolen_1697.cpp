void f() {
    try {
        bar();
    }
    catch(const exception& err) {
        foo(err);
    }
}