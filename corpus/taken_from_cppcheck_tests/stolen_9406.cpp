struct Foo { int* ptr; };
void f(Foo* foo) {
    delete foo->ptr;
    foo->ptr = new Foo; 
}