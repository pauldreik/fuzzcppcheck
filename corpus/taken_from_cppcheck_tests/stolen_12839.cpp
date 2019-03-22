struct Fred {
    void func1() throw();
    void func2() throw() { }
    void func3() throw(int);
    void func4() throw(int) { }
    void func5() const throw();
    void func6() const throw() { }
    void func7() const throw(int);
    void func8() const throw(int) { }
    void func9() throw() = 0;
    void func10() throw(int) = 0;
    void func11() const throw() = 0;
    void func12() const throw(int) = 0;
};