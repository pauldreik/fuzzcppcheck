struct Fred { int i; Fred(int, float); };
void f() {
    Fred *fred = new Fred(1, 2);
    fred->foo();
}