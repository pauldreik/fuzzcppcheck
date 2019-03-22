class mystring
{
    char* m_str;
    int m_len;
public:
    explicit mystring(const char* str)
    {
        m_len = strlen(str);
        m_str = (char*) malloc(m_len+1);
        memcpy(m_str, str, m_len+1);
    }
    mystring& operator=(const mystring& copy)
    {
        return (*this = copy.m_str);
    }
    ~mystring()
    {
        free(m_str);
    }
};