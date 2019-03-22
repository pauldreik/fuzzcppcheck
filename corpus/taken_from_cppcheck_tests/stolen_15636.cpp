void f(const Token* x) {
    if (x) {}
    for (; x && 
         x->str() != y; x = x->next()) {}
}