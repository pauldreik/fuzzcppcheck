using namespace std;class A {
public:
    A(){}
    const vector<int>&  GetVec() {return m_Vec;}
private:
    vector<int>  m_Vec;
};