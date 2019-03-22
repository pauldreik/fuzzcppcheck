int foo() {
    char buf[5];
    char *data[2];
    data[0] = buf;
    do_something(data);
}