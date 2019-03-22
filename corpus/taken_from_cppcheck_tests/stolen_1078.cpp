class A {
public:
    A(){}
    std::pair< int,std::vector<int> >&  GetPair() {return m_pair;}
private:
    std::pair< int,std::vector<int> >  m_pair;
};