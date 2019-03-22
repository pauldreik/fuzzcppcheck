template <typename>
struct Base { };
struct S : Base <void>::Type { };