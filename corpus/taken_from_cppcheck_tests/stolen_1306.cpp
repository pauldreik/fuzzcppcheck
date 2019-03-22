class C;
class Fred {
    C c;
    Fred(Fred const & other) { c = other.c; }
};