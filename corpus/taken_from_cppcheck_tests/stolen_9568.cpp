class Fred
{
public:
    int *i;
    Fred();
    ~Fred();
};

Fred::Fred()
{
    this->i = new int;
}
Fred::~Fred()
{
    delete this->i;
}