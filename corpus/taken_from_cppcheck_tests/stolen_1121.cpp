class A {
public:
    A(){m_d=1.0; m_iRealVal=2.0;}
    double dGetValue();
private:
    double m_d;
    double m_iRealVal;
};
double  A::dGetValue() {
    double dRet = m_iRealVal;
    if( m_d != 0 )
        return m_iRealVal / m_d;
    return dRet;
};