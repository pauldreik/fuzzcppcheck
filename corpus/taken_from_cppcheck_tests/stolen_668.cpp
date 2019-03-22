class A {
public:
    u8 buf[10];
    A();};

A::A() {
    memset(buf, 0, 10);
}