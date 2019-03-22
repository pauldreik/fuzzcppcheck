class B
{
    B & operator= (const B & Var);
public:
    B ();
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