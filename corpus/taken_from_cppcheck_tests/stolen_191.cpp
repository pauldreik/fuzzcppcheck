class Fred {
    std::string hello();
    std::string &f();
};
std::string Fred::hello()
{
     return "hello";
}
std::string &Fred::f()
{
    return hello();
}