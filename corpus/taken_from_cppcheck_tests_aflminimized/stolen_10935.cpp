class BB {};

template <class T>
class AA {
public:
    static AA<T> create(T* newObject);
    static int size();
};

class CC { public: CC(AA<BB>, int) {} };

class XX {
    AA<CC> y;
public:
    XX();
};

XX::XX():
    y(AA<CC>::create(new CC(AA<BB>(), 0)))
    {}

int yy[AA<CC>::size()];