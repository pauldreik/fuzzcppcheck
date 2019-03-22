void g(int x) throw() { }
void x() {
    f(g(124), shared_ptr<char>(new char));
}