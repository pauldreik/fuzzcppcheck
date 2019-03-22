void func1(int a, int b, int c);
void func1(int a, int b, int c) { }
void func2(int a, int b, int c);
void func2(int c, int b, int a) { }
void func3(int, int b, int c);
void func3(int c, int b, int a) { }
class Fred {
    void func1(int a, int b, int c);
    void func2(int a, int b, int c);
    void func3(int a = 0, int b = 0, int c = 0);
    void func4(int, int b = 0, int c = 0);
};
void Fred::func1(int a, int b, int c) { }
void Fred::func2(int c, int b, int a) { }
void Fred::func3(int c, int b, int a) { }
void Fred::func4(int c, int b, int a) { }
