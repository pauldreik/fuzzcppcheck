class A {
public:
    A(){}
    const std::pair< std::vector<int>,std::vector<int> >&  GetPair() {return m_pair;}
private:
    std::pair< std::vector<int>,std::vector<int> >  m_pair;
};