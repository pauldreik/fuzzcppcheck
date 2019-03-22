void func(const int x, const Fred &fred);
void otherfunc() {
    float t;
    func(x, &t);
}