void fn() {
    typedef std::vector<CharacterConversion> CharacterToConversion;
    CharacterToConversion c2c;
    for (CharacterToConversion::iterator it = c2c.begin(); it != c2c.end(); ++it) {}
    CharacterToConversion().swap(c2c);
}