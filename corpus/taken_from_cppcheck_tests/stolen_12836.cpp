struct Fred {
    void func1() noexcept;
    void func2() noexcept { }
    void func3() noexcept(true);
    void func4() noexcept(true) { }
    void func5() const noexcept;
    void func6() const noexcept { }
    void func7() const noexcept(true);
    void func8() const noexcept(true) { }
    void func9() noexcept = 0;
    void func10() noexcept = 0;
    void func11() const noexcept(true) = 0;
    void func12() const noexcept(true) = 0;
    void func13() const noexcept(false) = 0;
};