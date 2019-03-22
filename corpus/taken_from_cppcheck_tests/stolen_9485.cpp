void f() {
    int fd = socket(AF_INET, SOCK_PACKET, 0 );
    if (fd == -1)
        return;
}