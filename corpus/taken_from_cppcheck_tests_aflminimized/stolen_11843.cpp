typedef BAR<int> Foo;
int main() {
    Foo b(0);
    return b > Foo(10);
}