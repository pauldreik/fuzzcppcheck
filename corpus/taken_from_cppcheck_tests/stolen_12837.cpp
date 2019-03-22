class A {
public:
   A(A&& a) {
      throw std::runtime_error("err");
   }
};
class B {
   A a;
   B(B&& b) noexcept
   :a(std::move(b.a)) { }
};
