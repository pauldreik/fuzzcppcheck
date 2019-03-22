class Fred
{
private:
    std::string var;
public:
    Fred();
    Fred(const Fred &);
};
Fred::Fred() { };
Fred::Fred(const Fred &) { };
