class Fred {
    std::string hello();
    const char *f();
};
std::string Fred::hello()
{
     return "hello";
}
const char *Fred::f()
{
    return hello().c_str();
}