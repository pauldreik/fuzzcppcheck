class Foo;
class Bar;
class Sub;
class Foo { class Sub; };
class Bar { class Sub; };
class Bar::Sub {
    int b;
public:
    Sub() { }
    Sub(int);
};
Bar::Sub::Sub(int) { };
class ::Foo::Sub {
    int f;
public:
    ~Sub();
    Sub();
};
::Foo::Sub::~Sub() { }
::Foo::Sub::Sub() { }
class Foo;
class Bar;
class Sub;
