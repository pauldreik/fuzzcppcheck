void foo(uintmax_t uim, std::string s3, unsigned int ui, int i) {
    printf("%ju", uim);
    printf("%ju", ui);
    printf("%jd", ui);
    printf("%jd", s3);
    printf("%jd", i);
}