using namespace std;class A {
public:
    A(){}
    const pair<int ,double> & GetPair() {return m_pair;}
private:
    pair<int ,double> m_pair;
};