class Fred {
    typedef unsigned int * (*testfp)(unsigned int *);
    testfp get() { return test; }
    static unsigned int * test(unsigned int * p) { return p; }
};