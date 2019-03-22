class Fred
{
private:
    std::vector<int> ints;
public:
    Fred();
    void operator=(const Fred &f);
};

Fred::Fred()
{ }

void Fred::operator=(const Fred &f)
{ }