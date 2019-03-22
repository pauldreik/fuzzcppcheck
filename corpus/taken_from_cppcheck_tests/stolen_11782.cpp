class Fred {
    typedef void * (*testfp)(void *);
    testfp get() { return test; }
    static void * test(void * p) { return p; }
};