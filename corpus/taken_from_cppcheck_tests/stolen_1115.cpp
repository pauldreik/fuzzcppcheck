class A{
public:
A(){m_strVal="";}
std::string strGetString()
{return m_strVal.c_str();}
private:
std::string m_strVal;
};
