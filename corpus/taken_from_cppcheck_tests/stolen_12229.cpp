void f()
{
    std::vector<int> foo;
    std::vector<int>::iterator it;
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        if (somecondition) {
            if (*it == 1)
                foo.erase(it);
            else
                *it = 0;
            return;
        }
    }
}