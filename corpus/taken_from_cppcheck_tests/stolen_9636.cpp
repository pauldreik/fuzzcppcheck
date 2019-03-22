char** x(const char* str) {
    char* ptr[] = { malloc(10), malloc(5), strdup(str) };
    return ptr;
}