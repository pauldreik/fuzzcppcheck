typedef ::C (::C::* func1)();
typedef ::C (::C::* func2)() const;
typedef ::C (::C::* func3)() volatile;
typedef ::C (::C::* func4)() const volatile;
func1 f1;
func2 f2;
func3 f3;
func4 f4;