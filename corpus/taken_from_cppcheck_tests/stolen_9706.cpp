void foo()
{
    for (const Token *tok = tokens; tok; tok = tok ? tok->next() : NULL)
    {
        while (tok && tok->str() != ";")
            tok = tok->next();
    }
}