class Fred {
    typedef void (*testfp)();
    testfp get() { return test; }
    static void test() { }
};