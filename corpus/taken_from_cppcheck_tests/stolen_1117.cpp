class A{
public:
A(){m_strVec.push_back("");}
size_t strGetSize()
{return m_strVec.size();}
private:
std::vector<std::string> m_strVec;
};
