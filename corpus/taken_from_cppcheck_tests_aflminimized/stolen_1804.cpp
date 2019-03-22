struct teststruct {
    int testfunc1() __attribute__ ((warn_unused_result)) { return 1; }
    [[nodiscard]] int testfunc2() { return 1; }
    void foo() { testfunc1(); testfunc2(); }
};
int main() {
    teststruct TestStruct1;
    TestStruct1.testfunc1();
    TestStruct1.testfunc2();
}