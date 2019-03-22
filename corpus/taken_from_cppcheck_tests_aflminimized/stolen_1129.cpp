class Base {
public:
    int a;
};
class Derived1 : public Base { };
class Derived2 : public Derived1 { };
class Derived3 : public Derived2 { };
class Derived4 : public Derived3 {
public:
    int get() {
        return a;
    }
};