void addtoken(Token** rettail, const Token *tok);
void CheckMemoryLeakInFunction::getcode(const Token *tok ) {
   addtoken(&rettail, tok);
}