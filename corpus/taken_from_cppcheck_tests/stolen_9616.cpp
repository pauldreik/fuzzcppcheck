void deleteTokens(int *tok)
{
    delete tok;
}
class Tokenizer
{
public:
    Tokenizer();
    ~Tokenizer();

private:
    int *_tokens;
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