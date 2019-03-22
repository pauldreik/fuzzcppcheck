static void f(std::list<abc> &foo)
{
    std::list<abc>::iterator it = foo.begin();
    foo.erase(it->a);
    if (it->b);
}