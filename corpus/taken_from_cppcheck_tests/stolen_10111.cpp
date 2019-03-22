void test() {
    float *f = new float[10];
    delete [] (double*)f;
    delete [] (long double const*)(new float[10]);
}