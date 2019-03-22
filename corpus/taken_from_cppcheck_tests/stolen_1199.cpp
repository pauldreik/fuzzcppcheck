template <typename T>
class TemplateClass {
public:
   TemplateClass() { }
};
template <>
class TemplateClass<float> {
public:
   TemplateClass() { }
};
int main() {
    TemplateClass<int> a;
    TemplateClass<float> b;
    return 0;
}
