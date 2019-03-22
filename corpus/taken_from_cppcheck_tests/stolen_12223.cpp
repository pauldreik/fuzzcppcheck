void f()
{
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
    {
        if (x) {
            foo.erase(it);
            break;
        }
    }
}