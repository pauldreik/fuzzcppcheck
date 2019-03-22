template <>
class C<float> {
public:
   C() { }
   C(const C &) { }
   ~C() { }
   C & operator=(const C &) { return *this; }
};
C<float> b;
