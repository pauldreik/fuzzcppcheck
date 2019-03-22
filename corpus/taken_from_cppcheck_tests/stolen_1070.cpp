class A {
public:
    A(){}
    std::pair<std::vector<int>,double> GetPair() {return m_pair;}
private:
    std::pair<std::vector<int>,double> m_pair;
};