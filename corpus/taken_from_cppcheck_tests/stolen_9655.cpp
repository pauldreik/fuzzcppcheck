void __declspec(nothrow) g(int x) { }
void x() {
    f(g(124), shared_ptr<char>(new char));
}