struct A;
struct B {
    A* const a;
    B& operator=(const B& r) { }
};