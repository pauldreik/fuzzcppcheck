class foo {};
void foo(const char* cpc, char* pc) {
    printf("%e", cpc);
    printf("%E", pc);
    printf("%f", cpc);
    printf("%G", pc);
    printf("%f", pc);
}