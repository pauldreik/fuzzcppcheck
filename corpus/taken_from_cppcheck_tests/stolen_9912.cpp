struct NonPolymorphicA { ~A() {} };
bool foo() {
     NonPolymorphicA* a = 0;
     return typeid(*a) == typeid(*a);
}