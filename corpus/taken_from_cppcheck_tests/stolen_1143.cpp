class A
{
public:
    A(){};
    std::string operator+(const char *c)
    {
        return m_str+std::string(c);
    }
private:
    std::string m_str;
};