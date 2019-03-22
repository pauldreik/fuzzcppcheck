void f(char* buffer, int value) {
    char* pos = buffer;
    int size = value;
    *(int*)pos = size;
}