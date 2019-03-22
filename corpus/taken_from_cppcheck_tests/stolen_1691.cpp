void f() {
    try {
       foo();
    }
    catch(const exception& outer) {
        try {
           foo(outer);
        }
        catch(const exception& inner) {
            throw inner;
        }
    }
}