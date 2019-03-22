struct A {};
class B : public std::vector<const int *> {} b;
class C : public std::vector<const struct A *> {} c;
std::string s;
void foo() {
    printf("%zu %u", b.size(), b.size());
    printf("%p %d", b[0], b[0]);
    printf("%p %d", c[0], c[0]);
    printf("%p %d", s.c_str(), s.c_str());
}
