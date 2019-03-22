void f() {
    struct { u8 str[256]; } ms;
    mystrcpy(ms.str, "abcd");
}