class A {
public:
    A(){}
    const std::pair< std::pair < int, char > , int > & GetPair() {return m_pair;}
private:
    std::pair< std::pair < int, char > , int >  m_pair;
};