void f1(int x, int y) { c=x/y; }
void f2(unsigned int y) {
    f1(123,y);
    if (y>0){}
}