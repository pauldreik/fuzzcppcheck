class B
{
public:
    B (B && Var);
    int data;
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