int f(int fd, const char *mode) {
    char *path;
    if ((path = (char *)malloc(10)) == NULL || fd == -1)
        return 1;
    free(path);
    return 0;
}