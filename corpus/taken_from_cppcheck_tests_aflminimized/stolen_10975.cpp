namespace Constants { const int fourtytwo = 42; } template <class T, int U> struct TypeMath {   static const int mult = sizeof(T) * U; }; template <class T> struct FOO {   enum { value = TypeMath<T, Constants::fourtytwo>::mult }; }; FOO<int> foo;