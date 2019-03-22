void foo(int x) {
    for (const Token* end = tok->link(); tok != end; tok = (tok == end) ? end : tok->next()) {
        x++;
    }
}