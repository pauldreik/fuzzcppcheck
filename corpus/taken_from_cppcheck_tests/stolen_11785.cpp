class Fred {
    typedef void * (*testfp)(void *);
    testfp get(int i) { return test; }
    static void * test(void * p) { return p; }
};