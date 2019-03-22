class Token {
public:
    const std::string& str();
};
void simplifyArrayAccessSyntax() {
    for (Token *tok = list.front(); tok; tok = tok->next()) {
        const std::string temp = tok->str();
        tok->str(tok->strAt(2));
    }
}