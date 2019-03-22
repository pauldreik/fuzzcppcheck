int foo() {
    char buf1[5];
    char buf2[5];
    char *data[2];
    data[0] = buf1;
    data[1] = buf2;
    do_something(data);
}