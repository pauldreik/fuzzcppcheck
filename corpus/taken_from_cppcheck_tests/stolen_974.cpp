class Fred
{
    std::string s;
};
void f()
{
    Fred fred;
    memset(&fred, 0, sizeof(fred));
}