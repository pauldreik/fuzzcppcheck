std::string hello() {
     return "foo";
}

std::string &f() {
    return hello().substr(1);
}