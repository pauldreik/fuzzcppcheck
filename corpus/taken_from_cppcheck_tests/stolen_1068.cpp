class A {
public:
    A(){}
    std::vector<int> GetVec()  {return m_vec;}
    std::pair<int,double> GetPair() {return m_pair;}
private:
    std::vector<int> m_vec;
    std::pair<int,double> m_pair;
};