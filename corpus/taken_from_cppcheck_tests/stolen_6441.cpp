void foo(char* s, const char* s2, std::string s3, int i) {
    printf("%s%s", s, s2);
    printf("%s", i);
    printf("%i%s", i, i);
    printf("%s", s3);
    printf("%s", "s4");
    printf("%u", s);
}