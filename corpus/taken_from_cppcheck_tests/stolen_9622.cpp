class Fred
{
private:
    char *s;
public:
    Fred() { s = 0; }
    ~Fred() { free(s); }
    const Fred & operator = (const Fred &f)
    { s = malloc(100); }
};