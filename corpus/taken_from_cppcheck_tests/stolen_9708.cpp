void foo(int x, const Token *tok) {
    if (x == 123) {
        while (tok) tok = tok->next();
    }
    tok->str();
}
