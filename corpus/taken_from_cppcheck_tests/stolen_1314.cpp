class Fred {
    std::string a;
    std::string foo();
    Fred() { a = foo(); }
};