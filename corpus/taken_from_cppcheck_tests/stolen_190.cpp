class Fred {
    std::string &f();
};
std::string hello()
{
     return "hello";
}
std::string &Fred::f()
{
    return hello();
}