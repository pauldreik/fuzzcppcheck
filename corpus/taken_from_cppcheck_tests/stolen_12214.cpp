static void f()
{
    for (iterator it = foo.begin(); it != foo.end(); it = next)
    {
        next = it;
        next++;
        foo.erase(it);
    }
}