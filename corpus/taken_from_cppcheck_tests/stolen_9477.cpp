char * f(size_t size) {    void *p = malloc(1);    if (!p && size != 0)        return NULL;    return p;}