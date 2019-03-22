class A : public std::vector<int>
{
public:
    A(const A &a);
};
class B
{
    A a;
public:
    B(){}
    B(const B&){}
    B(B &&){}
    const B& operator=(const B&){return *this;}
};