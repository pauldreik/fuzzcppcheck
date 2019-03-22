void f()
{
    std::vector<int> foo;
    std::vector<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        if (*it == 1) {
            foo.erase(it);
            return;
        }
        else {
            foo.erase(it);
            return;
        }
    }
}