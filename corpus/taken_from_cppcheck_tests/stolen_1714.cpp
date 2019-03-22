void f()
{
    long addr;
    addr = inet_addr("127.0.0.1");
    if(!hp = gethostbyaddr((char *) &addr, sizeof(addr), AF_INET)) {
        exit(1);
    }
}