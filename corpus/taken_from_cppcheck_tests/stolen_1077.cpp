class A {
public:
    A(){}
    const std::pair< int,std::vector<int> >&  GetPair() {return m_pair;}
private:
    std::pair< int,std::vector<int> >  m_pair;
};