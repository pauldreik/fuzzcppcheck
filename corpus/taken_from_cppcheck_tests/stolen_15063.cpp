char * dostuff(char *p);
void f() {
    char a[4], *p=a;
    p = dostuff(p);
}