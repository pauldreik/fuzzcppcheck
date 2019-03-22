std::string hello()
{
     return "hello";
}

std::string &f()
{
    return hello();
}