void f(const Token *x) {
    x = x->next();
    while (x) { x = x->next(); }
    if (x->str()) {}
}