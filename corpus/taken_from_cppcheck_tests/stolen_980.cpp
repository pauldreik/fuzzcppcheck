namespace n1 {
    class Fred
    {
        std::string b;
    };
}
void f()
{
    n1::Fred fred;
    memset(&fred, 0, sizeof(n1::Fred));
}