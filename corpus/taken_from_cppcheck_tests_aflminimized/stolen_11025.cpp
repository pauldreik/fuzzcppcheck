struct Fred {
    template<typename T> T foo(T t) { return t; }
    template<> char foo<char>(char a) { return a; }
    template<> int foo<int>(int a) { return a; }
};
template float Fred::foo<float>(float);
template double Fred::foo<double>(double);