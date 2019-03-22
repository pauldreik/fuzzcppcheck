class Fred
{
public:
    Fred() { s = 0; }
    ~Fred() { free(s); }
    void xy()
    { s = malloc(100); }
private:
    char *s;
};