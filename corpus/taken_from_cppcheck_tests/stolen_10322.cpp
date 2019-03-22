void f()
{
    struct sigaction sa;

    { sigaction(SIGHUP, &sa, 0); };
    { sigaction(SIGINT, &sa, 0); };
}
