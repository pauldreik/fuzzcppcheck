class Fred
{
    virtual ~Fred();
};
void f()
{
    static Fred fred;
    memset(&fred, 0, sizeof(fred));
}