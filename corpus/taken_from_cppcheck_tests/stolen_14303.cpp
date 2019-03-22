class Fred {
public:
    FILE *f;
    ~Fred();
}
Fred::~Fred()
{
    fclose(f);
}