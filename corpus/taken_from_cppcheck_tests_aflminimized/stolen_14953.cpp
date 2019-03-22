class A {
    public:
        typedef enum { ID1,ID2,ID3 } Id_t;
        typedef struct {Id_t id; std::string a; } x_t;
        std::vector<x_t> m_vec;
        std::vector<x_t> Get(void);
        void DoSomething();
};
std::vector<A::x_t> A::Get(void) {
    return m_vec;
}
const std::string Bar() {
    return "x";
}
void A::DoSomething(void) {
    const std::string x = Bar();
}