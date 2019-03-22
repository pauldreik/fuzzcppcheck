void a(char *p) { mystrncpy(p,"hello world!",10); }
void b() {
    char buf[5];
    a(buf);}