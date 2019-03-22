void f() {
    try {
        bar();
    }
    catch( ::std::exception& err) {
        foo(err);
    }
}