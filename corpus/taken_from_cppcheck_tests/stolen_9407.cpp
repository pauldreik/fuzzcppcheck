struct Foo { int* ptr; };
void f(Foo* foo) {
    delete foo->ptr;
    x = *foo->ptr; 
}