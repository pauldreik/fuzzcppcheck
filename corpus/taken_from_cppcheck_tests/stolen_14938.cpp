std::string f() {
    const char code[] = "foo";
    const std::string s1(sizeof_(code));
    const std::string s2 = sizeof_(code);
    return(s1+s2);
}