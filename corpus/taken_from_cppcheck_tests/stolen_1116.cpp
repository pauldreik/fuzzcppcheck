class A{
public:
A(){m_strVal="";}
const std::string strGetString1()
{return m_strVal.c_str();}
private:
std::string m_strVal;
};
