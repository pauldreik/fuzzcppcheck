template <>
class C<float> {
public:
   C();
   C(const C &);
   ~C();
   C & operator=(const C &);
};
C::C() { }
C::C(const C &) { }
C::~C() { }
C & C::operator=(const C &) { return *this; }