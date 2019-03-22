void f(struct foo **my_struct) {
    char **pass_to_func = &(*my_struct)->buf[10];
}
