const char *f(int x) {
    const char a[] = "abc";
    const char def[] = "def";
    const char *ptr;
    switch(x) {
        case 1:  ptr=a; break;
        default: ptr=def; break;
    }
    return ptr;
}