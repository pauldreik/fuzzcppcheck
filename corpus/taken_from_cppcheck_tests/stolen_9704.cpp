void foo(Token &tok)
{
    for (int i = 0; i < tok.size(); i++ )
    {
        while (!tok)
            char c = tok.read();
    }
}