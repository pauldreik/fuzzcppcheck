std::vector<int> v;
std::string s;
void foo() {
    printf("%zu %Iu %d %f", v.size(), v.size(), v.size(), v.size());
    printf("%zu %Iu %d %f", s.size(), s.size(), s.size(), s.size());
}
