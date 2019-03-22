void foo(char i);
void bar(int i) {
    const char *s = "abcde";
    foo(s[i]);
}