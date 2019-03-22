class C;
class Fred {
    C c;
    Fred(Fred && other) { c = other.c; }
};