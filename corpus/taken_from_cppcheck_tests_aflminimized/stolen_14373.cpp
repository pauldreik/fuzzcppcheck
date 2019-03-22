void f() {
    char header[1];
    *((unsigned char*)((unsigned char *)(header))) = 0xff;
    return header[0];
}