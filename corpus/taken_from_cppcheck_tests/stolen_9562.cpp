class Token;

class Tokenizer
{
private:
    Token *_tokens;

public:
    Tokenizer();
    ~Tokenizer();
    void deleteTokens(Token *tok);
};

Tokenizer::Tokenizer()
{
    _tokens = new Token;
}

Tokenizer::~Tokenizer()
{
    deleteTokens(_tokens);
}

void Tokenizer::deleteTokens(Token *tok)
{
    while (tok)
    {
        Token *next = tok->next();
        delete tok;
        tok = next;
    }
}