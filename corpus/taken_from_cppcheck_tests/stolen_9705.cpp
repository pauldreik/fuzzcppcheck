void foo()
{
    for (const Token *tok = tokens; tok; tok = tok->next())
    {
        while (tok && tok->str() != ";")
            tok = tok->next();
        if( !tok ) break;
    }
}