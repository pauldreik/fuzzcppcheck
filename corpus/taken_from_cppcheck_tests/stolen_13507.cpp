void f( Foo &foo, Foo *foo2 ) {
const int a = 45;
foo.a=a+a;
foo2->a=a;
}