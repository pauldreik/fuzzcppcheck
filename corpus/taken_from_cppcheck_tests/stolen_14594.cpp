class Element {
    static void f() { }
};
void test() {
    Element *element; (*element).f();
}