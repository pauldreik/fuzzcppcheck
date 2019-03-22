struct c
{
    c();
    explicit c(bool b);
    void InitInt();

    int m_iMyInt;
    int m_bMyBool;
}

c::c()
{
    m_bMyBool = false;
    InitInt();}

c::c(bool b)
{
    m_bMyBool = b;
    InitInt();
}

void c::InitInt()
{
    m_iMyInt = 0;
}