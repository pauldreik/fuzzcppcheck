int f(int fd, const char *mode) {
    char *path;
    if (fd == -1 || (path = (char *)malloc(10)) == NULL)
        return 1;
    free(path);
    return 0;
}