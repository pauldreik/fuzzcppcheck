using namespace std;class A {
public:
    A(){}
    const pair< vector<int>, int >&  GetPair() {return m_pair;}
private:
    pair< vector<int>, int >  m_pair;
};