class Foo {
    void f(float a) { this->a = a; }
    union { float a; int b; };
};