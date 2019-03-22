class fred {
public:
    void x();
};
void test(int a) {
    fred f;
    if (a == 2) {
        f.x();
    }
}