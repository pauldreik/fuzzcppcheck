class Example {
  public:
    void Clear(void) { Example tmp; (*this) = tmp; }
};