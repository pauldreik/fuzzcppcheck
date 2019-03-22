class A {
public:
    A(){}
    const std::pair< int , std::pair < int, char > >&  GetPair() {return m_pair;}
private:
    std::pair< int , std::pair < int, char > >  m_pair;
};