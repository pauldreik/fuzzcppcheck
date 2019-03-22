class Fred {
    int i;
    float f;
public:
    Fred() {
        foo(1);
        foo(1.0f);
    }
    void foo(int a) { i = a; }
    void foo(float a) { f = a; }
};