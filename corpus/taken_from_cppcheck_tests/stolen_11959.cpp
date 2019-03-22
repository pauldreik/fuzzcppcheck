typedef A::B::C (A::B::C::* func1)();
typedef A::B::C (A::B::C::* func2)() const;
typedef A::B::C (A::B::C::* func3)() volatile;
typedef A::B::C (A::B::C::* func4)() const volatile;
func1 f1;
func2 f2;
func3 f3;
func4 f4;