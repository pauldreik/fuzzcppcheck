void foo(const Token *tok)
{
    while (tok && tok->str() == "=")
        tok = tok->next();

    if (tok->str() != ";")
        ;
}
