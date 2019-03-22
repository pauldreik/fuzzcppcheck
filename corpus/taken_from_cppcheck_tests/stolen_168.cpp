class Fred {
    std::string foo();
};
std::string Fred::foo()
{
    char str[100] = {0};
    return str;
}