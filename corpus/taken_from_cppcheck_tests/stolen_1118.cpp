class A{
public:
A(){m_strVec.push_back("");}
bool strGetEmpty()
{return m_strVec.empty();}
private:
std::vector<std::string> m_strVec;
};
