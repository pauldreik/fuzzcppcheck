typedef C func1();
typedef C (* func2)();
typedef C (& func3)();
typedef C (C::* func4)();
typedef C (C::* func5)() const;
typedef C (C::* func6)() volatile;
typedef C (C::* func7)() const volatile;
func1 f1;
func2 f2;
func3 f3;
func4 f4;
func5 f5;
func6 f6;
func7 f7;