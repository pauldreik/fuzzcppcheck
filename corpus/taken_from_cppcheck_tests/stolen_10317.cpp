struct stat { int a; int b; };
void stat(const char *fn, struct stat *);

void foo() {
    stat("file.txt", &st);
    do_something();
}