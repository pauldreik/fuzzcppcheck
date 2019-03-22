class C;
class Fred {
    C a;
    Fred() { try { a = new int; } catch(...) {} }
};