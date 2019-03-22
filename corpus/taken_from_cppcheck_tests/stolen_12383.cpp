const char* foo() {
    static std::string text;
    text = "hello world\n";
    return text.c_str();
}