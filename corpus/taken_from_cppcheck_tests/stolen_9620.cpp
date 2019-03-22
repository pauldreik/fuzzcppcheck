class Fred
{
private:
    char *s;
public:
    Fred() { s = 0; }
    ~Fred() { free(s); }
    void xy()
    { s = malloc(100); }
};