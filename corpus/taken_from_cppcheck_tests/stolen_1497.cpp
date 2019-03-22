class A
{
    B m_SemVar;
public:
    A(){}
    A(const A&){}
    const A& operator=(const A&){return *this;}
};