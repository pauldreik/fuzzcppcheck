void f() {
    try {
    } catch (CException* e) {
        trace();
        e->Delete();
    }
}