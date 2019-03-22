std::string hello()
{
     return "hello";
}

const char *f()
{
    return hello().c_str();
}