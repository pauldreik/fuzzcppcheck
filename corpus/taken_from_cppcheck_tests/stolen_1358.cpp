class Base0 {
   protected:
   int x;
};
class Base1 {
   int x;
};
struct Derived : Base0, Base1 {
   int x;
};