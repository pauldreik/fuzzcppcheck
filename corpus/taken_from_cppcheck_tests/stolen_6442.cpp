void foo(char* s, const char* s2, std::string s3, int i) {
    printf("%jd", s);
    printf("%ji", s);
    printf("%ju", s2);
    printf("%jo", s3);
    printf("%jx", i);
    printf("%jX", i);
}