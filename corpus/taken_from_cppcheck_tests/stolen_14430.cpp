int foo(char* in, bool b) {
    char* c;
    if (b) for (c = in; *c == 0; ++c) {}
    else c = in + strlen(in) - 1;
    *c = 0;
}