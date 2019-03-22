char* test(int* i) {
    long double *d = (long double*)(i);
    double *d = (double*)(i);
    float *f = reinterpret_cast<float*>(i);
}