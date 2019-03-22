typedef struct bstr {} bstr;
struct bstr bstr0(const char *s) {
    return (struct bstr) { (unsigned char *)s, s ? strlen(s) : 0 };
}