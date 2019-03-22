void f(char *c, int offset)  {
     if (!memcmp(c, c + offset, 42)){}
     if (!memcmp(c + offset, c, 42)){}
     if (!memcmp(offset + c, c, 42)){}
     if (!memcmp(c, offset + c, 42)){}
}