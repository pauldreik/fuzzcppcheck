void bufferAccessOutOfBounds2() {
    char *buffer[]={"a","b","c"};
    for(int i=3; i--;) {
        printf("files(%i): %s", 3-i, buffer[3-i]);
    }
}