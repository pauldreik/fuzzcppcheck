void** f()
{
    void *&value = tls[id];    return &value;}