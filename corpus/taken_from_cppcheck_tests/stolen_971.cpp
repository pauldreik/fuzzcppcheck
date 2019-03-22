class Fred
{
    mutable std::string b;
};
void f()
{
    Fred fred;
    memset(&fred, 0, sizeof(Fred));
}