void f() {
    std::stack<Token *> links;
    while (!links.empty() || indentlevel)
        links.push(tok);
}