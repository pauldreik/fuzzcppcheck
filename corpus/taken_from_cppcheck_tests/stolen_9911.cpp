struct PolymorphicA { virtual ~A() {} };
bool foo() {
     PolymorphicA* a = 0;
     return typeid(*a) == typeid(*a);
}