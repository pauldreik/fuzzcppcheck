void f() {
    try {
       foo();
    }
    catch(std::runtime_error& err) {
        throw err;
    }
}