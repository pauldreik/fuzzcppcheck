class A{
public:
A(){m_strVal="";}
std::string strGetString() const
{return m_strVal.c_str();}
const std::string strGetString1() const
{return m_strVal.c_str();}
private:
std::string m_strVal;
};
