void f(int argc, char *const argv[]) {
    char **local_argv = safe_malloc(sizeof (*local_argv));
    int local_argc = 0;
    local_argv[local_argc++] = argv[0];
}
