template <class T1, class T2, class T3, class T4 > struct A { };

template <class T>
struct B
{
    public:
        A < int, Pair<T, int>, int > a;
};

B<int> b;
