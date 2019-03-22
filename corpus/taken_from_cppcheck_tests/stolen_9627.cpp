void f()
{
    int fd;
    fd = mkstemp(strdup("/tmp/file.XXXXXXXX"));
    close(fd);
}