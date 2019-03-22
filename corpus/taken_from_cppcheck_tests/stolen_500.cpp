class Fred
{
private:
    char str[10];
public:
    char c();
};
char Fred::c()
{
    return str[10];
}