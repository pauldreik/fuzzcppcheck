struct A {
    void operator+=(A&) && = delete;
};
