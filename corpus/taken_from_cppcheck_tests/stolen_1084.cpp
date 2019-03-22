class A {
public:
    A(){}
    std::pair< std::vector<int>,std::vector<int> >&  GetPair() {return m_pair;}
private:
    std::pair< std::vector<int>,std::vector<int> >  m_pair;
};