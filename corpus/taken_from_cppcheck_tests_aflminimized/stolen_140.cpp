void func1() {
    char tmp1[256];
    free(tmp1);
    char tmp2[256];
    delete tmp2;
    char tmp3[256];
    delete tmp3;
    char tmp4[256];
    delete[] (tmp4);
    char tmp5[256];
    delete[] tmp5;
}