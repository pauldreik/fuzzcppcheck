struct A;
struct B {
    A* const a;
    B() { }
    B(B& b) { }
};