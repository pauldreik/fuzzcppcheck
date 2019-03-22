class Fred {
    int x;
public:
    Fred(struct A a, struct B b);
    Fred(C c, struct D d);
    Fred(struct E e, F f);
    Fred(struct G, struct H);
    Fred(I, J);
};
Fred::Fred(A a, B b) { }
Fred::Fred(struct C c, D d) { }
Fred::Fred(E e, struct F f) { }
Fred::Fred(G g, H h) { }
Fred::Fred(struct I i, struct J j) { }
