class Fred {
  public:
    Fred & operator=(const Fred &);
    virtual Fred & clone(const Fred & other);
    int x;
};
Fred & Fred::operator=(const Fred & other) {
    return clone(other);
}
Fred & Fred::clone(const Fred & other) {
    return *this;
}