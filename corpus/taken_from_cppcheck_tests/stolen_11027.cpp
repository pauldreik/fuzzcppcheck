template<class T> void foo(T const& t) { }
template<> void foo<double>(double const& d) { }
template void foo<float>(float const& f);
int main() {
    foo<int>(2);
    foo<double>(3.14);
    foo<float>(3.14f);
}