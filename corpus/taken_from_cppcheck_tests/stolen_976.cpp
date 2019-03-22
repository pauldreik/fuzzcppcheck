class Fred
{
    virtual ~Fred();
};
void f()
{
    Fred fred;
    memset(&fred, 0, sizeof(fred));
}