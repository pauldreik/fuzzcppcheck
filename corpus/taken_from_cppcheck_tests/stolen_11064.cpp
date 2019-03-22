struct A {int a;int b};
class Fred {public:
    Fred() : a({1,2}) {
        for (int i=0;i<6;i++);
    }
private:
    A a;
};
