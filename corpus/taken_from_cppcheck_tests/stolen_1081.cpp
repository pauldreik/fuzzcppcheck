using namespace std;class A {
public:
    A(){}
    pair< vector<int>, int >&  GetPair() {return m_pair;}
private:
    pair< vector<int>, int >  m_pair;
};