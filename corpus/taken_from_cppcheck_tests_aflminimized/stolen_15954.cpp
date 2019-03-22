class Fred {
    int method_with_internal(X&);
    int method_with_internal(X*);
    int method_with_internal(int&);
    int method_with_internal(A* b, X&);
    int method_with_internal(X&, A* b);
    int method_with_internal(const B &, int);
    void Set(BAR);
    FOO Set(BAR);
    int method_with_class(B<B> b);
    bool function(std::map<int, int, MYless> & m);
};