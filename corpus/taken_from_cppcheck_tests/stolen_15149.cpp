class Fred {char c;};
class A : public Fred { int i; };
int foo() {
    A a;
    return 0;
}