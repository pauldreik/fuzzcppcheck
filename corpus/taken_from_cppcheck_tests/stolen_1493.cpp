class B
{
public:
    B (const B & Var);
};
class A
{
    B m_SemVar;
public:
    A(){}
    A(const A&){}
    A(A &&){}
    const A& operator=(const A&){return *this;}
};