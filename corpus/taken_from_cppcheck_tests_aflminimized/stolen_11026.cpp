namespace NS1 {
    namespace NS2 {
        template<typename T> T foo(T t) { return t; }
        template<> char foo<char>(char a) { return a; }
        template<> int foo<int>(int a) { return a; }
    }
    template float NS2::foo<float>(float);
}
template double NS1::NS2::foo<double>(double);