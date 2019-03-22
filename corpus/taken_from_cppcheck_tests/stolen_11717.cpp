class Fred {
    std::string s;
    const std::string & foo();
};
const std::string & Fred::foo() { return ""; }