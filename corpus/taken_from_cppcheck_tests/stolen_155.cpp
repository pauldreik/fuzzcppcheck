void f() {
    char stack[512];
    RGNDATA *data;
    if (data_size > sizeof (stack)) data = malloc (data_size);
    else data = (RGNDATA *)stack;
    if ((char *)data != stack) free (data);
}
