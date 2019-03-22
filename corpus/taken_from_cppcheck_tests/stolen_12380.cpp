std::string f();

void foo() {
    const char *c = f().c_str();
}