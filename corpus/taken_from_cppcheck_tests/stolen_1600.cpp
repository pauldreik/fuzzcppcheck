class A
{
private:
    struct B {
        char *str1;
        char *str2;
        B() : str1(NULL), str2(NULL) { }
    }
    struct B b;
public:
    A() {
    }
};