class A {
public:
    A():m_strValue(""){}
    std::string strGetString() { return m_strValue; }
private:
    std::string m_strValue;
};