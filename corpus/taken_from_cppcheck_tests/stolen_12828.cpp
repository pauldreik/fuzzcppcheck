void foo1(int, char* a) { }
void foo1(int, char a) { }
void foo1(int, wchar_t a) { }
void foo2(int, float a) { }
void foo2(int, wchar_t a) { }
void foo3(int, float a) { }
void foo3(int, char a) { }
void func() {
    foo1(1, 'c');
    foo1(2, L'c');
    foo2(3, 'c');
    foo2(4, L'c');
    foo3(5, 'c');
    foo3(6, L'c');
}