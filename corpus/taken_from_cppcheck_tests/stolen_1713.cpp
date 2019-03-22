void f()
{
    struct hostent *hp;
    if(!hp = gethostbyname("127.0.0.1")) {
        exit(1);
    }
}