struct Foo {
    void foo1(int i, int j = 0) {
        return func(this);
    }
    int bar1() {
        return foo1(1);
    }
    int bar2() {
        return foo1(1, 2);
    }
    int bar3() {
        return foo1(1, 2, 3);
    }
    int bar4() {
        return foo1();
    }
    void foo2(int i = 0) {
        return func(this);
    }
    int bar5() {
        return foo2();
    }
    void foo3() {
        return func(this);
    }
    int bar6() {
        return foo3();
    }
};