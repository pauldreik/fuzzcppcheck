void f()
{
    C *c;
    if (fun(&c));
    c->Release();
}