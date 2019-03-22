void f(void *p, int offset)  {
     if (!memcmp(p, p + offset, 42)){}
     if (!memcmp(p + offset, p, 42)){}
     if (!memcmp(offset + p, p, 42)){}
     if (!memcmp(p, offset + p, 42)){}
}