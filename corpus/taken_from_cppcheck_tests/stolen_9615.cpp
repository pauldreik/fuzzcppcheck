class Tokenizer
{
public:
    Tokenizer();
    ~Tokenizer();

private:
    int *_tokens;
    static void deleteTokens(int *tok);
};

Tokenizer::Tokenizer()
{
     _tokens = new int;
}

Tokenizer::~Tokenizer()
{
    deleteTokens(_tokens);
    _tokens = 0;
}

void Tokenizer::deleteTokens(int *tok)
{
    delete tok;
}