class A : public std::vector<std::string> {} a;
class B : public std::string {} b;
std::string s;
void foo() {
    printf("%p %d", a[0].c_str(), a[0].c_str());
    printf("%c %p", b[0], b[0]);
    printf("%c %p", s[0], s[0]);
}
