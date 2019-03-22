struct error {
    error() {}
};

class parser {
public:
    void error() const {}

    void foo() const {
        error();
        do_something();
    }
};
