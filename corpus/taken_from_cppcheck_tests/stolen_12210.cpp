void f()
{
    std::list<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it) {
        foo.erase(it);
    }
    for (it = foo.begin(); it != foo.end(); ++it) {
        foo.erase(it);
    }
}