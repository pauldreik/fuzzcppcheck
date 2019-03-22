void f(int n, ...)
{
    va_list ap;
    va_start(ap, n);
    std::vector<std::string> v(n);
    std::generate_n(v.begin(), n, [&ap]()
    {
        return va_arg(ap, const char*);
    });
}
