FOO* factory() {
    FOO* foo = new (std::nothrow) FOO;
    return foo;
}