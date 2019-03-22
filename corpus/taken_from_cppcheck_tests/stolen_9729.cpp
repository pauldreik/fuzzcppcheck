void f()
{
    for (const Token *tok = _tokenizer->tokens(); tok; tok = tok->next())
    {
        while (tok && tok->str() != "{")
            tok = tok->next();
        if (!tok)
            return;
    }
}