class Token;

class Tokenizer
{
private:
    Token *_tokens;

public:
    Tokenizer()
    {
        _tokens = new Token;
    }
    ~Tokenizer()
    {
        deleteTokens(_tokens);
    }
    void deleteTokens(Token *tok)
    {
        while (tok)
        {
            Token *next = tok->next();
            delete tok;
            tok = next;
        }
    }
};