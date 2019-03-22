class Fred {
    typedef const unsigned int * (*testfp)(const unsigned int *);
    testfp get() { return test; }
    static const unsigned int * test(const unsigned int * p) { return p; }
};