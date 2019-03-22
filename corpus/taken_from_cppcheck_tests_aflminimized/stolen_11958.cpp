typedef ::B::C (::B::C::* func1)();
typedef ::B::C (::B::C::* func2)() const;
typedef ::B::C (::B::C::* func3)() volatile;
typedef ::B::C (::B::C::* func4)() const volatile;
func1 f1;
func2 f2;
func3 f3;
func4 f4;